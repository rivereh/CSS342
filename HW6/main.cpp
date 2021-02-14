#include <iostream>
#include "list.h"
#include "list.cpp"
#include "show.h"
using namespace std;

int main()
{
    List<int> list;
    list.data[0] = 5;
    list.data[1] = 3;
    list.data[2] = 1;
    list.data[3] = 2;
    list.data[4] = 4;
    // list.insert(7);
    // list.sort();
    // cout << list << endl;
    Show aot("Attack on Titan", "Action");
    Show dn("Death Note", "Mystery");
    Show sao("Sword Art Online", "Action");

    
    List<Show> shows;


    cout << aot.name << endl;

}