#include "list.h"
using std::cout;

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
        cout << "Index larger than list size!\n";
        return -1;
    }
    else
        return data.at(index);
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

ostream& operator<<(ostream &outStream, const List &list)
{
    if (list.data.size() == 0)
        outStream << "No items in list!\n";
    else
    {
        outStream << "[" << list.data.at(0);
        for (int i = 1; i < list.data.size(); i++)
            outStream << ", " << list.data.at(i);
        outStream << "]\n";
    }
	return outStream;
}