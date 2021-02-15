#include <iostream>
#include "list.h"
#include "shallowcopylist.h"
#include "deepcopylist.h"

using std::cout;

void initalizeList(List& list);
void compareLists(List& list1, List& list2);

int main()
{   
    // Shallow list demonstration
    List *shallowList1 = new ShallowCopyList();
    initalizeList(*shallowList1);
    shallowList1->bubbleSort();

    // Shallow list copy constructor
    List *shallowList2 = new ShallowCopyList(*shallowList1);

    // Changing item in first list and compare demonstration
    shallowList1->get(1)->user.setName("Apple");
    cout << "Shallow lists:\n";
    shallowList1->print();
    cout << "-------------------------------\n";
    shallowList2->print();
    cout << endl;
    compareLists(*shallowList1, *shallowList2);
    cout << "---------------------------------------\nDeep lists:\n";
    
    // Deep list demonstration
    List *deepCopyList1 = new DeepCopyList();
    initalizeList(*deepCopyList1);
    deepCopyList1->bubbleSort();

    // Deep list copy constructor
    List* deepCopyList2 = new DeepCopyList(*deepCopyList1);
    deepCopyList2->bubbleSort();

    // Changing item in first list and compare demonstration
    deepCopyList1->get(1)->user.setName("Apple");
    deepCopyList1->print();
    cout << "-------------------------------\n";
    deepCopyList2->print();
    cout << endl;
    compareLists(*deepCopyList1, *deepCopyList2);

}

void initalizeList(List& list)
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

void compareLists(List& list1, List& list2)
{
    if (list1 == list2)
    {
        cout << "Lists are equal!\n";
    }
    else
    {
        cout << "Lists are not equal!\n";
    }
}