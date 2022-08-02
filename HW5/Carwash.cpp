/********************************************************
 * Definition of Carwash class methods
 *
 * Author: Alina Burlacu
 * Version: 07/17/2022
 *******************************************************/

#include<fstream>
#include<iostream>
#include<string>
#include"Carwash.h"
using namespace std;


void Carwash::occupy(queue<Car> & ls, string fileName){

    fstream inFile;
    string line;
    int carCount = 1;

    inFile.open(fileName, ios::in);

    // Check if file open.If not open throw exception
    try{
        if(!inFile.is_open()){
            throw(fileName);
        }
        else{
            // Loop through input file
            while(!inFile.eof()){
                getline(inFile, line);

                // Instantiate car object
                Car car(carCount, stoi(line));

                // Push object to queue
                ls.push(car);
                carCount++;
            };
        };
    }catch(string& file){
        cout << "Unable to open " << file << ".";
    };
};

void Carwash::printTable(){

    printf("%-*s", 13, "Car Number");
    printf("%-*s", 15, "Arrival Time");
    printf("%-*s", 11, "Car Wash");
    printf("%-*s", 18, "Departure Time");
    printf("%-*s", 13, "Wait Time");
    printf("%-*s", 14, "Total");
    cout << "\n";
    printf("%*s", 37, "Start Time");
    printf("%*s", 38, "Time");
    cout << "\n";
};

void Carwash::printTimes(Car &car){

    printf("% *d", 5, car.getCarNum());
    printf("% *d", 13, car.getArrivalTime());
    printf("%*s", 14, "           Car arrived after closing time and was not served");
    cout << "\n";
};

void Carwash::printTimes(Car &car, int depart, int wait, int total){

    printf("% *d", 5, car.getCarNum());
    printf("% *d", 13, car.getArrivalTime());
    printf("% *d", 14, car.getStartTime());
    printf("% *d", 14, depart);
    printf("% *d", 16, wait);
    printf("% *d", 11, total);
    cout << "\n";
};

int Carwash::getDepartTime(Car &car) {

    depart_time = car.getArrivalTime() + duration + getWaitTime(car);
    return depart_time;
};

int Carwash::getWaitTime(Car &car) {

    if (car.getArrivalTime() == 1) {
        wait_time = 0;
    } else {
        wait_time = car.getStartTime() - car.getArrivalTime();
    }
    return wait_time;
}

void Carwash::setNextStartTime(Car &car, int depart){

    if(car.getArrivalTime() == 1){
        car.setStartTime(1);
    }
    else if(car.getArrivalTime() > depart_time){
        car.setStartTime(car.getArrivalTime());
    }else{
        car.setStartTime(depart);
    };
};