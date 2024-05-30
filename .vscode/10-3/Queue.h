#ifndef QUEUE_H
#define QUEUE_H

#include "List.h" 

class Queue {
private:
    List list; 

public:
    Queue(); 
    void enqueue(int value);
    int dequeue(); 
    bool empty() const; 
};

#endif 