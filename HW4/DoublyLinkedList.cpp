/********************************************
 * DoublyLinkedList.cpp
 * Defines DoublyLinkedList class functions
 *
 * Author: Alina Burlacu
 * Version: July 15, 2022
 *********************************************/

#include <iostream>
#include "DoublyLinkedList.h"
#include "Node.h"
using namespace std;

DoublyLinkedList::DoublyLinkedList()
{
   head = nullptr;
   tail = nullptr;
   count = 0;
}

int DoublyLinkedList::getSize() const
{
    return count;
}

bool DoublyLinkedList::isEmpty() const
{
    return count == 0;
}

void DoublyLinkedList::clear()
{

    Node *temp = head;
    while (!isEmpty()) {
        while (head != nullptr) {
            remove(head->getValue());
            count--;
            head = head->getNext();
        }
    }
}
Node* DoublyLinkedList::find(const int& entry) const
{
    Node *temp = head;
    while (temp != nullptr) {
        if (temp->getValue() == entry) {
            return temp;
        } else {
            temp =temp->getNext();
        }
    }
    return nullptr;
}

bool DoublyLinkedList::add(const int& entry)
{
    Node* newNode = new Node(entry);
    Node* temp;

    //if the list is empty, set new node as head
    if (head == nullptr){
        head = newNode;
    } //if value of head is bigger than new node value, set new node as head (order small to big)
    else if(head->getValue() >= entry){
        newNode->setNext(head);
        head->setPrev(newNode);
        head = newNode;
    }
    else{
        temp = head;
        //starting at head:
        //while next node exists AND next node's value is smaller than new value, move down list
        while(temp->getNext()!=nullptr && temp->getNext()->getValue() < entry){
            temp = temp->getNext();
        }
        //when condition is no longer true,
        // (next node no longer exists/ next node's value is bigger than new),
        // set new node's next ptr to point to what the node we stopped on was pointing to next
        newNode->setNext(temp->getNext());

        // if next node exists,
        if(temp->getNext() !=nullptr){
            newNode->getNext()->setPrev(newNode);
        }
        temp->setNext(newNode);
        newNode->setPrev(temp);
    }
    count ++;
    return true;
}

bool DoublyLinkedList::remove(const int& entry) {
    bool done = false;
    Node *nodePtr = find(entry);
    if (nodePtr != nullptr) {

        nodePtr->setValue(head->getValue());

        Node *nodeToDelete = head;
        head = head->getNext();

        nodeToDelete->setNext(nullptr);
        delete nodeToDelete;

        count--;
        done = true;
    }
    sort();
    return done;
}

void DoublyLinkedList::print()
{
    if (isEmpty()) {
        cout << "List is empty." << endl;
    } else {
        Node *temp = head;
        while (temp != nullptr) {
            cout << temp->getValue() << " ";
            temp = temp->getNext();
        }
    }
}


void DoublyLinkedList::findPrint(const int& entry)
{
    if (findk(entry) != -1) {
        cout << "Number " << entry << " is located at position " << findk(entry) << endl;
    }
    else{
        cout << "Number " << entry << " is not in list. " << endl;
    }
}

int DoublyLinkedList::findk(const int& entry) const
{
    Node *current = (head->getNext());

    int index = 0;

    while(current->getValue() != entry && current->getNext() != nullptr){
        index++;
        current = current->getNext();
    }
    if (current->getValue() != entry){
        return -1;
    }
    return (index+1);
}


void DoublyLinkedList::sort()
{
    Node* i =head;
    Node* j;
    int temp;
    while(i != nullptr)
    {
        j=i->getNext();
        while(j != nullptr)
        {
            if(i->getValue() > j->getValue())
            {
                temp = i->getValue();
                i->setValue(j->getValue());
                j->setValue(temp);
            }
            j = j->getNext();
        }
        i = i->getNext();
    }
}