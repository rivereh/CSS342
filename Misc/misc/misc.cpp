#include <iostream>
#include <vector>

using namespace std;


template<class T>
void swapValues(T& var1, T& var2)
{
    T temp;

    temp = var1;
    var1 = var2;
    var2 = temp;
}



int main()
{

    // vectors
    vector<int> list;
    for (int i = 1; i <= 10; i++)
        list.push_back(i);
    
    // for (auto i = list.begin(); i != list.end(); i++)
    // {
    //     cout << *i << endl;
    // }

    for (int i : list)
        cout << i << endl;




    // int int1 = 1;
    // int int2 = 2;

    // cout << int1 << " " << int2 << endl;
    // swapValues(int1, int2);
    // cout << int1 << " " << int2 << endl;

    // char char1 = 'a';
    // char char2 = 'b';

    // cout << char1 << " " << char2 << endl;
    // swapValues(char1, char2);
    // cout << char1 << " " << char2 << endl;
    
    
}