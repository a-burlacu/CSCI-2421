#include <iostream>
#include "Double_Linked_List.h"
using namespace std;

Node::Node()
{
    head = nullptr;
    tail = nullptr;
    next = nullptr;
    prev = nullptr;

}

Node::Node(int& val)
{
    value = val;
    next = nullptr;
    prev = nullptr;
}

Node::Node(int& val, Node* nextptr, Node* prevptr)
{
    value = val;
    next = nextptr;
    prev = prevptr;
}

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
    prev = prevptr;
}

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

int Node::getSize() const
{
    return itemCount;
}

bool Node::isEmpty()
{
    return itemCount == 0;
}

void Node::clear()
{
    //call remove function in a loop
    //while isEmpty is false
}

// int Node::find(int& entry)
// {

// }

// bool Node::add(int& entry)
// {

// }

bool Node::remove(int& entry)
{
    if (isEmpty())
    {
        return false;
    }
    
}

void Node::print(Node* head)
{
    Node* traverser  = head;

    while(traverser != nullptr)
    {
        cout << traverser->value << endl;
        traverser = traverser->next;
    }
}
