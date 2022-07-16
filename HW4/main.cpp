/********************************************
 * This is the main driver function for the
 * Doubly Linked List
 *
 * Author: Alina Burlacu
 * Version: July 15, 2022
 *********************************************/

#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

int main() {
    //Initiate new list object
    DoublyLinkedList* list = new DoublyLinkedList();

    //Add numbers to list
    list->add(1);
    list->add(5);
    list->add(9);
    list->add(16);
    list->add(25);
    list->add(2);
    list->add(7);
    list->add(19);

    //Print current list
    list->print();

    cout << endl;
    list->add(10); //Add 10

    list->print(); //Print list
    cout << endl;

    //Print current list size
    cout << "Current list size: " << list->getSize() << endl;

    //Check if list is empty
    if (list->isEmpty()){
        cout << "List is empty." << endl;
    }
    else {
        cout << "List is not empty." << endl;
    }

    //Remove value 9
    list->remove(9);

    //Print current list
    list->print();
    cout << endl;

    //Print current list size
    cout << "Number of items in the list is: " << list->getSize() << endl;

    //find and print location of 16 and 9
    list->findPrint(16);
    list->findPrint(9);

    //Clear list
    list->clear();

    //Print list
    list->print();

    return 0;
}
