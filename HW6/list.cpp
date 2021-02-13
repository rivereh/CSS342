#include <iostream>
#include "list.h"
using std::cout;
using std::endl;

template <typename T>
void List<T>::sort()
{
    for (int i = used - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (data[j] > data[j + 1])
            {
                int temp = data[j + 1];
                data[j + 1] = data[j];
                data[j] = temp;
            }
        }
    }
}

template <typename T>
void List<T>::print()
{
    for (int i = 0; i < used; i++)
        cout << data[i] << " ";
    cout << endl;
}

// this insertion method has a complexity of O(n)
template <typename T>
void List<T>::insert(T item)
{
    if (used >= size)
    {
        cout << "Array maxed!\n";
        return;
    }

    int i;
    for (i = used - 1; (i >= 0 && data[i] > item); i--)
        data[i + 1] = data[i];

    data[i + 1] = item;
    used++;
}

template <typename T>
void List<T>::remove(T item)
{
    if (!search(item))
    {
        cout << "Item not in list!\n";
        return;
    }

    if (data[size - 1] == item)
        used--;

    int prev = data[used - 1];
    int i;
    for (i = used - 2; i >= 0 && data[i] != item; i--)
    {
        int curr = data[i];
        data[i] = prev;
        prev = curr;
    }
    data[i] = prev;
    used--;
}

// this search method has a complexity of O(logn)
template <typename T>
bool List<T>::search(T item)
{
    int min = 0;
    int max;
    (used % 2 == 0) ? max = used - 1 : max = used;
    
    while (min <= max)
    {
        int mid = min + (max - 1) / 2;
        if (data[mid] == item)
            return true;

        if (data[mid] < item)
            min = mid + 1;
        else
            max = mid - 1;
    }
    return false;
}

template <typename T>
ostream& operator<<(ostream &outStream, const List<T> &list)
{
    for (int i = 0; i < list.used; i++)
        outStream << list.data[i] << " ";
	return outStream;
}