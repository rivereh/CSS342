#include "queue.h"

void Queue::enqueue(int num)
{
    List::add(num);
}

int Queue::dequeue()
{
    int elem = getData()->at(0);
    List::remove(0);
    return elem;
}

void Queue::print()
{
    List::print();
}