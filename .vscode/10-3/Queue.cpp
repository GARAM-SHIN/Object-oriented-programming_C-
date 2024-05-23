#include "Queue.h"

Queue::Queue() : List() {}

void Queue::enqueue(int value) {
    pushBack(value);
}

int Queue::dequeue() {
    return popFront();
}