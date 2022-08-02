/********************************************************
 * Header file for Carwash class
 *
 * Author: Alina Burlacu
 * Version: 07/17/2022
 *******************************************************/

#ifndef CAR_WASH_H
#define CAR_WASH_H

#include<queue>
#include<string>
#include"Car.h"
using namespace std;

class Carwash: Car{

private:
    int duration = 3;
    int wait_time;
    int depart_time;

public:
    // Default constructor
    Carwash(){}

    // Class methods
    void occupy(queue<Car> &ls, string filename);  //Create queue from file data
    void printTable();
    void printTimes(Car &car);
    void printTimes(Car &car, int depart, int wait, int total);
    int getDepartTime(Car &car);// Calculate departure time: arrive + wait + duration
    int getWaitTime(Car &car); // Calculate wait time: start - arrive
    void setNextStartTime(Car &car, int depart); //Calculate start time of next car

};





#endif