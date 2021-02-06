#include "list.h"
#include <algorithm>
using std::cout;
using std::find;

int List::size()
{
    return data.size();
}

bool List::contains(int elem)
{
    return find(data.begin(), data.end(), elem) != data.end() ? true : false;
}

void List::add(int num)
{
    data.push_back(num);
}

void List::remove(int index)
{
    if (index >= size())
        cout << "Index larger than list size!\n";
    else 
        data.erase(data.begin() + index);
}

void List::print()
{
    if (size() == 0)
        cout << "No items in list!\n";
    else
    {
        cout << "[" << data.at(0);
        for (int i = 1; i < size(); i++)
            cout << ", " << data.at(i);
        cout << "]\n";
    }
}

vector<int> *List::getData()
{
    return &data;
}