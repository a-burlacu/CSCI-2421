/*
 * Author: Dr. Salim Lakhani
 * Version 20220314
 */

#include "Stack.h"

Stack::Stack (int initCapacity) {
    capacity = initCapacity;
    top = 0;
    stack = new int[capacity];
}
bool Stack::push (int anItem) {
    if (top == capacity) {
        return false;
    }
    else {
        stack[top] = anItem;
        top++;
        return true;
    }
}
bool Stack::pop () {
    if (top == 0) {
        return false;
    }
    else {
        top--;
    }
}
int Stack::peek () {
    if (top != 0)
        return stack[top-1];
    else
        throw -1;
}
bool Stack::empty() {
    return (top == 0);
}
void Stack::clear() {
    top = 0;
}



int Stack::size() {
    return top;
}

