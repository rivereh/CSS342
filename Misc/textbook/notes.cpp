#include <iostream>
using namespace std;

void passValue(int num)
{
    num = 1;
}

void passReference(int &num)
{
    num = 10;
}

double totalInches(int feet, int inches)
{
    inches = 12 * feet + inches;
    return inches;
}

int main()
{
    // call-by-value parameter
    // only value of argument is plugged in

    // call-by-reference parameter
    // argument is a variable and is plugged in itself

    // int num = 4;
    // passValue(num); // will not change value of num
    // passReference(num); // will change value of num
    // cout << num << endl;

    // cout << totalInches(2, 3) << endl;



}