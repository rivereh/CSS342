#include <iostream>
#include "list.h"
#include "list.cpp"
using namespace std;

void swapValues(int& v1, int& v2)
{
    int temp;
    temp = v1;
    v1 = v2;
    v2 = temp;
}

int indexOfSmallest(const int a[], int start, int size)
{
    int min = a[start];
    int indexOfMin = start;

    for (int i = start + 1; i < size; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            indexOfMin = i;
        }
    }
    return indexOfMin;
}

void selectionSort(int a[], int size)
{
    int indexOfNextSmallest;
    for (int i = 0; i < size - 1; i++)
    {
        indexOfNextSmallest = indexOfSmallest(a, i, size);
        swapValues(a[i], a[indexOfNextSmallest]);
    }
}

void bubbleSort(int arr[], int length)
{
    for (int i = length - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

bool binarySearch(int arr[], int min, int max, int target)
{   
    while (min <= max)
    {
        int mid = min + (max - 1) / 2;

        if (arr[mid] == target)
            return true;

        if (arr[mid] < target)
            min = mid + 1;
        else
            max = mid - 1;
    }
    return false;
}

int main()
{

    // int arr[6] = {5, 3, 1, 2, 4, 7};
    // bubbleSort(arr, 6);

    // (binarySearch(arr, 0, 5, 34)) ? cout << "ye\n" : cout << "no\n";

    // // for (auto& x : arr) // pass by reference example
    // //     x++;

    // for (auto x : arr)
    //     cout << x << " ";
    // cout << endl;
    
    List<int> list;
    list.data[0] = 5;
    list.data[1] = 3;
    list.data[2] = 1;
    list.data[3] = 2;
    list.data[4] = 4;
    list.sort();
    cout << list << endl;

}