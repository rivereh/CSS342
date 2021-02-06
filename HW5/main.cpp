#include <iostream>
#include "list.h"

using std::endl;
using std::cout;

int main()
{
    List newList;

    newList.add(2);
    newList.add(3);
    newList.add(4);

    cout << newList << endl;
    
    // cout << newList.find(2) << endl;

    // newList.print();
    // newList.remove(0);
    // newList.print();


}