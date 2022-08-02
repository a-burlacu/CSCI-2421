/********************************************************
 * Contains main driver function for Car Wash
 *
 * Author: Alina Burlacu
 * Version: 07/17/2022
 *******************************************************/

# include<iostream>
# include<fstream>
# include<queue>
# include "Car.h"
#include "Carwash.h"
using namespace std;

const int SIMULATION_END_TIME = 540;

int main(){

    Car car;
    Carwash wash;
    queue<Car > carQueue;
    string file = "arrival_time.txt";

    int departureTime;
    int waitTime ;
    int totalTime;
    int *nextStart = new int();


    wash.occupy(carQueue, file);
    wash.printTable();

    while(!carQueue.empty()){

        // Copy object
        car = carQueue.front();

        // If car arrives after closing
        if(car.getArrivalTime() > SIMULATION_END_TIME){
            wash.printTimes(car);
            carQueue.pop();
            continue;
        };

        // set next car start time
        wash.setNextStartTime(car, *nextStart);

        //get departure time and wait time calculations
        departureTime = wash.getDepartTime(car);
        waitTime = wash.getWaitTime(car);

        // initialize next car with previous car's depart time
        *nextStart = wash.getDepartTime(car);

        // Total time: wait + duration
        totalTime = wash.getDepartTime(car) - car.getArrivalTime();

        // Print results
        wash.printTimes(car, departureTime, waitTime, totalTime);

        carQueue.pop();
    };
    //Clear memory
    delete nextStart;

    return 0;
};