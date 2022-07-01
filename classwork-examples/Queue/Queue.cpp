/*
 * Author: Dr. Salim Lakhani
 * Version 20220328
 */

#include "Queue.h"


Queue::Queue (int initialCapacity) {
    capacity = initialCapacity;
    queue = new int[initialCapacity];
    count = 0;
    front = 0;
    back = 0;

}

bool Queue::push (int anItem) {

    if (count >= capacity)
        return false;
    else {
        queue[back] = anItem;
        back = (back + 1) % capacity;
        count++;
    }

    return true;
}

bool Queue::pop () {
    if (empty())
        return false;
    else {
        front = (front + 1) % capacity;
        count--;
    }
    return true;
}

int Queue::peek () {
    return queue[front];

}

bool Queue::empty() {
    return (count == 0);
}

void Queue::clear() {
    count = 0;
    front = 0;
    back = 0;
}

int Queue::size() {
    return count;
}
