#include "stack.h"
using std::cout;

void Stack::push(int num)
{
    List::add(num);
}

int Stack::pop()
{
    if (List::size() == 0)
    {
        cout << "No elements in stack!\n";
        return -1;
    }
    else
    {
        int elem = getData()->back();
        getData()->pop_back();
        return elem;
    }
}

void Stack::print()
{
    List::print();
}