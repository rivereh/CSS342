#ifndef QUEUE_H
#define QUEUE_H

#include "list.h"

class Queue : private List
{
public:
    void enqueue(int);
    int dequeue();
    void print();
};

#endif /* QUEUE_H */