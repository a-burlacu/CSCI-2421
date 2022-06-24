/********************************************
 * HW2.cpp 
 * Main program. Contains findMax function template, initialized
 * vector of Student class objects, and driver function for 
 * comparison of Student object. 
 *
 * Author: Alina Burlacu
 * Version: 06152022
 *********************************************/
#include <iostream>
#include <vector>
#include "Student.h"
#include "Comparator_ID.h"
#include "Comparator_Name.h"

using namespace std;

// findMax Template
template <typename Object, typename Comparator>
const Object &findMax(const vector<Object> &list, Comparator cmp)
{
    int MAX = 0;

    for (int i = 1; i < list.size(); i++)
    {
        if (cmp.isLessThan(list[MAX], list[i]))
        {
            MAX = i;
        }
    }
    return list[MAX];
}


int main()
{
    // Create vector of Student objects
    // populate with Student objects
    vector<Student> v = {Student{"Dewey", "Mcguire", 395474},
                         Student{"Hareem", "Laing", 859333},
                         Student{"Cade", "Cordova", 362241},
                         Student{"Lilly", "Brown", 440475},
                         Student{"Ricardo", "Britt", 129900},
                         Student{"Louise", "Vaughn", 787763},
                         Student{"Jenna", "Vaughn", 651001},
                         Student{"Kirk", "Kelley", 818555}};

    // Display Student list
    cout << "List of Students" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << "Student Name: " << v[i].getFirstName() << " "
             << v[i].getLastName() << "\t"
             << "Student ID: "
             << v[i].getId() << endl;
    }
    cout << endl;

    // Create function object of ComparatorID type
    ComparatorID ci = ComparatorID{};

    // Compare Student objects by ID, and display student with largest ID
    Student result = findMax(v, ci);
    cout << "Largest Student ID:  " << endl;
    cout << result.getId() << endl;

    cout << endl;

    // Create a function object of ComparatorName type
    ComparatorName cn = ComparatorName{};

    // Compare Student objects by name, and display student with largest name
    Student result2 = findMax(v, cn);
    cout << "Largest Student Name:  " << endl;
    cout << result2.getFirstName() << " " << result2.getLastName() << endl;

    cout << endl;

    return 0;
}