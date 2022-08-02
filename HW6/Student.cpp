/********************************************
 * Student.cpp
 *  Defines Student class functions.
 * Author: Alina Burlacu
 * Version: 07/29/2022
 *********************************************/
#include <iostream>

#include "Student.h"

using namespace std;

//constructors
Student::Student() {};
Student::Student(string first, string last, int i)
{
    firstName = first;
    lastName = last;
    id = i;
}

//getters
string Student::getFirstName() const
{
    return firstName;
}
string Student::getLastName() const
{
    return lastName;
}
int Student::getId() const
{
    return id;
}


//overloading < operator to compare student objects by id
bool Student::operator< (Student& student) {
    // If id of student1 is less than id of student2-> return true
    if (getId() < student.getId()) {

        return true;
    }
    // If id of student1 is greater than id of student2->return false
    return false;
}