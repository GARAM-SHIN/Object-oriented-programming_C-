#ifndef QUEUE_H
#define QUEUE_H

#include "List.h"

class Queue : public List {
public:
    Queue();
    void enqueue(int value);
    int dequeue();
};

#endif