/********************************************
 * main.cpp
 * Contains driver function for InsertionSort
 * Reads in a text file
 * Creates array of student objects from file
 * Author: Alina Burlacu
 * Version: 07/29/2022
 *********************************************/
#include <iostream>
#include "Student.h"
#include <fstream>
#include <sstream>
using namespace std;

//function prototype
void insertionSort (Student *students, int size);


int main(){

    ifstream File("input.txt");
    // Create array of Student - students of size 50
    Student students[50];
    // variable n to represent size of students, initialize with 0
    int count = 0;


    // check if File is open
    if (File.is_open()) {

        string line;
        // while loop for all the lines in the File txt file
        while (getline(File, line)) {
            stringstream ss(line);
            // create firstName, lastName and id variables
            string firstName, lastName,id;
            // get id comma seperated
            getline(ss, id, ',');
            // get firstName comma seperated
            getline(ss, firstName, ',');
            // get lastName
            getline(ss, lastName, ',');
            // create an object of Student by passing firstName, lastName and id to Student constructor
            // Add Student object to nth index of students array
            students[count] = Student(firstName, lastName, stoi(id));
            // increment count
            count += 1;
        }
    }
    // call insertionSort & pass students pointer and size
    insertionSort(students, count);

    //for loop to print students list from index [0] to [count]
    for (int i = 0; i < count; i++) {
        cout << students[i].getId() << " " << students[i].getFirstName() << " " << students[i].getLastName() << endl;
    }
}


// InsertionSort takes pointer to array of student objects and array size
// will sort students by id
void insertionSort(Student *students, int size) {

    int i, j;
    for (i = 1; i < size; i++) {

        Student student = students[i];

        j = i - 1;

        //j greater or equal to 0 and id of student to be less than id of student at index j
        while (j >= 0 &&  student < students[j]){

            // Assign value of student at index j to j+1 index
            students[j + 1] = students[j];

            // decrement j by 1
            j = j - 1;
        }
        // Assign value of student to j+1 index of students
        students[j + 1] = student;
    }
}
