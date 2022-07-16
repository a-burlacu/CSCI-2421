/********************************************
 * DoublyLinkedList class header file.
 * Contains DoublyLinkedList class declaration,
 * function prototypes, private variables
 *
 * Author: Alina Burlacu
 * Version: July 15, 2022
 *********************************************/

#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H
#include "Node.h"

class DoublyLinkedList {
private:
    int count; //number of items in list
    Node* head; //headptr
    Node* tail; //tailptr

public:
    DoublyLinkedList(); //default constructor

    //Methods
    int getSize() const; //returns how many items in list
    bool isEmpty()const; //checks if list is empty
    void clear(); //removes all nodes from list
    Node* find(const int& entry) const; //returns index of an item if contained in list
    bool add(const int& entry) ; //inserts node into list in correct position
    bool remove(const int& entry); //deletes node from list
    void print(); //displays the list
    void findPrint(const int& entry); //prints the index of an item in list
    void sort(); //sorts list
    int findk(const int& entry) const; //finds index value of item in list
};


#endif //DOUBLYLINKEDLIST_H
