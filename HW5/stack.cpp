#include "stack.h"

void Stack::push(int num)
{
    List::add(num);
}

int Stack::pop()
{
    int elem = getData()->back();
    getData()->pop_back();
    return elem;
}

void Stack::print()
{
    List::print();
}