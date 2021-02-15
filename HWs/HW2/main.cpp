#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

void initalizeList(DoublyLinkedList& list);


int main()
{
    //doubly-linked structure with 10 objects
    DoublyLinkedList list;
    initalizeList(list);

    cout << "There are " << list.size() << " elements in the list\n\n";
    cout << "Printing list in accending order:\n";
    
    // ascending sort demonstration, complexity O(n^2)
    list.bubbleSort('a');
    list.print();
    
    cout << "\nPrinting list in decending order:\n";

    // descending sort demonstration, complexity O(n^2)
    list.bubbleSort('d');
    list.print();

    cout << endl;
    // search demonstration, complexity O(n)
    string userSearch = "Jason";
    if (list.search(userSearch) != 0)
    {
        cout << "User " << list.search(userSearch)->user.getName() << " was found in the list!";
    }
    else
    {
        cout << "User " << userSearch << " was not found in the list!\n"; 
    }
    
    userSearch = "Jared";
    if (list.search(userSearch) != 0)
    {
        cout << "User " << list.search(userSearch)->user.getName() << " was found in the list!";
    }
    else
    {
        cout << "User " << userSearch << " was not found in the list!\n"; 
    }
}

void initalizeList(DoublyLinkedList& list)
{
    User river("River", 23);
    User julianna("Julian", 20);
    User david("David", 22);
    User martin("Martin", 22);
    User nikki("Nikki", 11);
    User niall("Niall", 24);
    User shane("Shane", 19);
    User copper("Copper", 2);
    User chayton("Chayton", 23);
    User jared("Jared", 21);

    list.push(river);
    list.push(julianna);
    list.push(david);
    list.push(martin);
    list.push(nikki);
    list.push(niall);
    list.push(shane);
    list.push(copper);
    list.push(chayton);
    list.push(jared);
}