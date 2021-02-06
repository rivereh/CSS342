#include "list.h"

List::List()
{   

}

List::~List()
{

}

int List::size()
{
    return data.size();
}

int List::find(int index)
{
    if (index >= size())
    {
        std::cout << "Index larger than list size!\n";
        return -1;
    }
    else
        return data.at(index);
}

void List::add(int num)
{
    data.push_back(num);
}

void List::print()
{
    if (size() == 0)
        std::cout << "No items in list!\n";
    else
    {
        std::cout << "[" << data.at(0);
        for (int i = 1; i < size(); i++)
            std::cout << ", " << data.at(i);
        std::cout << "]\n";
    }
}

void List::remove(int index)
{
    if (index >= size())
        std::cout << "Index larger than list size!\n";
    else 
        data.erase(data.begin() + index);
}