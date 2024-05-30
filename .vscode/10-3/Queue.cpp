#include "Queue.h"

Queue::Queue() {
    
}

void Queue::enqueue(int value) {
    list.pushBack(value); 
}

int Queue::dequeue() {
    return list.popFront(); 
}

bool Queue::empty() const {
    return list.length() == 0; 
}