#include "set.h"
using std::cout;

void Set::add(int num)
{
    if (!contains(num))
        List::add(num);
    else
        cout << num << " is already in the set!\n";
}