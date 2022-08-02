/********************************************
 * Student class header file.
 * Contains the Student class declaration
 * function prototypes for constructor and 'get' functions
 * as well as operator< overloading function
 *
 * Author: Alina Burlacu
 * Version: 07/29/2022
 *********************************************/
#ifndef STUDENT_H
#define STUDENT_H

// Student class declaration
class Student
{
private:
    std::string firstName;
    std::string lastName;
    int id;

public:
    Student();
    Student(std::string first, std::string last, int i);

    std::string getFirstName() const;
    std::string getLastName() const;
    int getId() const;
    bool operator< (Student& student);
};

#endif // STUDENT_H
