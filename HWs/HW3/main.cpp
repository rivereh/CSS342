#include <iostream>
#include "doublylinkedlist.h"

using std::cout;

void initalizeList(DoublyLinkedList& list);
void searchUser(DoublyLinkedList& list, string name);

int main()
{
   //doubly-linked structure with 3 objects, 1 parent and 2 children
    DoublyLinkedList list;
    initalizeList(list);
    cout << "Unsorted list:\n";
    list.print();

    // Search demonstration
    cout << "\nSearch demonstration:\n";
    searchUser(list, "River");
    searchUser(list, "Rubert");

    // Sorting demonstration
    cout << "\nSorted list:\n";
    list.bubbleSort();
    list.print();
}

void initalizeList(DoublyLinkedList& list)
{
    User river("River", 23);
    Moderator julianna("Julian", 20);
    Admin david("David", 22);
    User martin("Martin", 22);
    Moderator nikki("Nikki", 11);
    Admin niall("Niall", 24);
    User shane("Shane", 19);
    Moderator copper("Copper", 2);
    Admin chayton("Chayton", 23);
    Admin jared("Jared", 21);

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

void searchUser(DoublyLinkedList& list, string name)
{
    DoublyLinkedList::Node* search = list.search(name);
    if (search != nullptr)
    {
        cout << name << " found in list!\n";
    }
    else
    {
        cerr << name << " not found in list!\n";
    }
}