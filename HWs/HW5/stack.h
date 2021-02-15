#ifndef STACK_H
#define STACK_H

#include "list.h"

class Stack : private List
{
public:
    void push(int);
    int pop();
    void print();
};

#endif /* STACK_H */