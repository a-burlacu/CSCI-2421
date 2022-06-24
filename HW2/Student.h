/********************************************
 * Student class header file. 
 * Contains the Student class declaration, along with 
 * function prototypes for constructor and 'get' functions.   
 * 
 * Author: Alina Burlacu
 * Version: 06152022
 *********************************************/
#ifndef HW2_STUDENT_H
#define HW2_STUDENT_H

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
};

#endif // HW2_STUDENT_H
