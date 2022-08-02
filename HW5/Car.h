/********************************************************
 * Header file for Car class
 *
 * Author: Alina Burlacu
 * Version: 07/17/2022
 *******************************************************/

#ifndef CAR_H
#define CAR_H

class Car{
private:
    int car_number;
    int arrival_time;
    int start_time;
    ;

public:
    //Constructors
    Car(){}
    Car(int carNum, int arrival);

    //Getters
    int getCarNum();
    int getArrivalTime();
    int getStartTime();



    //Setters
    void setCarNum(int carNum);
    void setArrivalTime(int arrival);
    void setStartTime(int start);



};


#endif