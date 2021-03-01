#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    if (size <= 1)
        return;

    swap(*arr, *(arr + (size - 1)));
    reverseArray(arr--, size - 2);
}

int main()
{

    int test[3] = {1, 2, 3};

    for (int num : test)
        cout << num << " ";
    cout << endl;

    reverseArray(test, 3);
    
    for (int num : test)
        cout << num << " ";
    cout << endl;

    // cout << "Hello, world!\n";
}



