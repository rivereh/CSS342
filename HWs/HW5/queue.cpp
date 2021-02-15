#include "queue.h"
using std::cout;

void Queue::enqueue(int num)
{
    List::add(num);
}

int Queue::dequeue()
{
    if (List::size() == 0)
    {
        cout << "No elements in queue!\n";
        return -1;
    }
    else
    {
        int elem = getData()->at(0);
        List::remove(0);
        return elem;
    }
}

void Queue::print()
{
    List::print();
}