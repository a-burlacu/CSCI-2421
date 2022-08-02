/********************************************************
 * Definition of Car class methods
 *
 * Author: Alina Burlacu
 * Version: 07/17/2022
 *******************************************************/

#include "Car.h"

Car::Car(int carNum, int arrival){
    car_number = carNum;
    arrival_time = arrival;
};


//Getters
int Car::getCarNum(){
    return car_number;
};

int Car::getArrivalTime(){
    return arrival_time;
};

int Car::getStartTime(){
    return start_time;
};


//Setters
void Car::setCarNum(int carNum){
    car_number = carNum;
};

void Car::setArrivalTime(int arrival){
    arrival_time = arrival;
};

void Car::setStartTime(int start){
    start_time = start;
};
