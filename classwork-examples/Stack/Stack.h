/*
 * Author: Dr. Salim Lakhani
 * Version 20220314
 */

#ifndef STACK_STACK_H
#define STACK_STACK_H


class Stack {

public:
    Stack (int initCapacity);
    bool push (int anItem);
    bool pop ();
    int peek ();
    bool empty();
    void clear();
    int size();

private:
    int capacity;
    int top;
    int * stack;
};


#endif //STACK_STACK_H
