/********************************************
 * Node.cpp
 * Defines Node class functions
 *
 * Author: Alina Burlacu
 * Version: July 15, 2022
 *********************************************/


#include "Node.h"

Node::Node()
{
    next = nullptr;
    prev = nullptr;
}
Node::Node(const int& val)
{
    next = nullptr;
    prev = nullptr;
    value = val;
}
Node::Node(const int& val, Node* nextptr, Node* prevptr)
{
    value = val;
    next = nextptr;
    prev = prevptr;
}

//Setters
void Node::setValue(const int& val)
{
    value = val;
}
void Node::setNext(Node* nextptr)
{
    next = nextptr;
}
void Node::setPrev(Node* prevptr)
{
    prev =prevptr;
}

//Getters
int Node::getValue() const
{
    return value;
}
Node* Node::getNext() const
{
    return next;
}
Node* Node::getPrev() const
{
    return prev;
}
