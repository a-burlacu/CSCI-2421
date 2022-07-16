/********************************************
 * Node class header file.
 * Contains Node class declaration, constructors,
 * function prototypes, private variables
 *
 * Author: Alina Burlacu
 * Version: July 15, 2022
 *********************************************/

#ifndef NODE_H
#define NODE_H

class Node {
private:
    int value; //data stored in node
    Node* next; //pointer to next node
    Node* prev; //pointer to previous node

public:

    //constructors
    Node();
    Node(const int& val);
    Node(const int& val, Node* nextptr, Node* prevptr);

    //Setters
    void setValue(const int& val);
    void setNext(Node* nextptr);
    void setPrev(Node* prevptr);

    //Getters
    int getValue() const;
    Node* getNext() const;
    Node* getPrev() const;

};


#endif //NODE_H
