#include <iostream>
#include "list.h"
#include "list.cpp"
#include "show.h"
#include "user.h"
using namespace std;

void initializeShowList(List<Show>& list);
void initializeUserList(List<User>& list);

int main()
{   
    cout << "Show demonstration:\n";
    List<Show> shows;
    initializeShowList(shows);
    cout << shows << endl;

    cout << "Finding existing show demonstration:\n";
    Show aot("Attack on Titan", 84);
    cout << "Searched for: \"" << shows.search(aot) << "\" Found!" << endl;

    cout << "\nClosest show demonstration:\n";
    Show rz("Re:Zero", 85);
    cout << "Searched for: \"" << rz << "\" Not found!\nClosest result: \"" << shows.search(rz) << "\"" << endl;

    cout << "\nTop three results demonstration for existing \"" << aot << "\":\n";
    shows.topThree(aot);

    cout << "\nTop three results demonstration for non-existing \"" << rz << "\":\n";
    shows.topThree(rz);

    cout << "\n-------------------------------------------------------\n";

    cout << "\nUser demonstration:\n";
    List<User> users;
    initializeUserList(users);
    cout << users << endl;

    cout << "Finding existing user demonstration:\n";
    User river("River", 23);
    cout << "Searched for: \"" << users.search(river) << "\" Found!" << endl;

    cout << "\nClosest user demonstration:\n";
    User kevin("Kevin", 20);
    cout << "Searched for: \"" << kevin << "\" Not found!\nClosest result: \"" << users.search(kevin) << "\"" << endl;

    cout << "\nTop three results demonstration for existing \"" << river << "\":\n";
    users.topThree(river);

    cout << "\nTop three results demonstration for non-existing \"" << kevin  << "\":\n";
    users.topThree(kevin);
}

void initializeShowList(List<Show>& list)
{
    Show aot("Attack on Titan", 84);
    Show dn("Death Note", 86);
    Show sao("Sword Art Online", 72);
    Show cb("Cowboy Bebop", 87);
    Show fma("Fullmetal Alchemist", 91);
    list.insert(aot);
    list.insert(dn);
    list.insert(sao);
    list.insert(cb);
    list.insert(fma);
    list.insert(cb); // inserting cowboy bebop twice
}

void initializeUserList(List<User>& list)
{
    User river("River", 23);
    User david("David", 21);
    User mark("Mark", 32);
    User dexter("Dexter", 25);
    User martin("Martin", 24);
    list.insert(river);
    list.insert(david);
    list.insert(mark);
    list.insert(dexter);
    list.insert(martin);
    list.insert(dexter); // inserting dexter twice
}