#include <iostream>
#include "purchased.h"
#include "recentlyplayed.h"
using namespace std;

int main()
{
    Song s1("American Idiot", "Greenday");
    Song s2("3005", "Childish Gambino");
    Song s3("Feel Good", "Gorillaz");

    Purchased list(s1);
    list.add(s1);
    list.add(s2);
    list.add(s3);
    list.remove(s1);
    list.add(s1);
    list.print();

    cout << endl << "Copied List: \n";
    Purchased list2(list);
    list2.print();


    cout << endl << "Recently Played List: \n";
    RecentlyPlayed recentlyPlayed(s1);
    recentlyPlayed.add(s1);
    recentlyPlayed.add(s2);
    recentlyPlayed.print();
    


    
    


}