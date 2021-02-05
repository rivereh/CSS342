#include <iostream>
using namespace std;

int main()
{

    int *p, v;
    p = &v;
    *p = 999;

    cout << *p << endl;


}