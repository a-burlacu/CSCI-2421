/********************************************
 
 *
 *  Defines Student class functions.
 * Author: Alina Burlacu
 * Version: 06152022
 *********************************************/
#include <iostream>
#include "Student.h"

using namespace std;

/*
 * Parameterized constructor for Student which takes 3 args:
 * @param first - first name of Student
 * @param last - last name of Student
 * @param i - id of Student
 */
Student::Student(string first, string last, int i)
{
    firstName = first;
    lastName = last;
    id = i;
}

/*
 * @return firstName of Student
 */
string Student::getFirstName() const
{
    return firstName;
}

/*
 * @return lastName of Student
 */
string Student::getLastName() const
{
    return lastName;
}

/*
 * @return id of Student
 */
int Student::getId() const
{
    return id;
}
