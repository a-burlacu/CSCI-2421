#ifndef DOUBLE_LINKED_LIST_H
#define DOUBLE_LINKED_LIST_H

class Node{
private:

    int value; //data stored in node
    int itemCount; //number of items in list
    Node* next; //pointer to next node
    Node* prev; //pointer to previous node
    Node* head; //headptr
    Node* tail; //tailptr
    
public:

    //Constructors
    Node();
    Node(int& val);
    Node(int& val, Node* nextptr, Node* prevptr);

    //Setters
    void setValue(const int& val);
    void setNext(Node* nextptr);
    void setPrev(Node* prevptr);

    //Getters
    int getValue() const;
    Node* getNext() const;
    Node* getPrev() const;

   
    int getSize() const; //returns how many items in list
    bool isEmpty(); //checks if list is empty
    void clear(); //removes all nodes from list
    int find(int& entry); //returns index of an item if contained in list 
    bool add(int& entry); //inserts node into list in correct position
    bool remove(int& entry); //deletes node from list
    void print(Node* head); //displays the list

};


#endif