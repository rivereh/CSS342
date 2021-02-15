#include <iostream>
#include "doublylinkedlist.h"

using namespace std;

void initalizeList(DoublyLinkedList& list);


struct Nodee
{
    User data;
    Nodee* prev;
    Nodee* next;
};

void insertFront(Nodee** start, User data)
{
    Nodee* ptr1 = new Nodee;
    ptr1->data = data;
    ptr1->next = *start;
    if (*start != nullptr)
    {
        (*start)->prev = ptr1;
    }
    *start = ptr1;
}


void swapUser(User& user1, User& user2)
{
    User temp;
    temp = user1;
    user1 = user2;
    user2 = temp;
}

void bubbleSort(Nodee* head)
{
    int i, swapped;
    Nodee* ptr1;
    Nodee *lptr = nullptr;

    if (head == nullptr)
    {
        return;
    }

    do
    {
        swapped = 0;
        ptr1 = head;

        while (ptr1->next != lptr)
        {
            if (ptr1->data.getAge() > ptr1->next->data.getAge())
            {
                swapUser(ptr1->data, ptr1->next->data);
                swapped = 1;
            }
            ptr1 = ptr1->next;
        }
        lptr = ptr1;
    }
    while(swapped);

}

void printList(Nodee* start)
{
    Nodee* temp = start;
    while (temp != nullptr)
    {
        cout << temp->data.getName() << ", Age: " << temp->data.getAge() << endl;
        temp = temp->next;
    }
}


int main()
{


    // DoublyLinkedList list;
    // initalizeList(list);
    // list.print();
    // list.insertionSort();
    // list.print();

    DoublyLinkedList list2;
    User river("River", 23);
    // Node* node1 = new Node(river, nullptr, nullptr);
    // list2.insertSorted(node1);
    // insertSorted(list2, node1);
    // list2.insert(node1);
    list2.print();

    

    User nikki("Nikki", 11);
    // Node* node5 = new Node(nikki, nullptr, nullptr);
    // list2.insertSorted(node5);
    // list2.insert(node5);
    // list2.print();
    // insertSorted(list2, node5);

    User david("David", 22);
    // Node* node3 = new Node(david, nullptr, nullptr);
    // list2.insertSorted(node3);
    // list2.insert(node3);
    // insertSorted(list2, node3);

    // list2.print();

    // insertionSort(list2);
    // list2.insertionSort();
    // list2.print();
    // bubbleSort(list2.head);
    // list2.print();


    // Nodee* start = nullptr;
    // insertFront(&start, nikki);
    // insertFront(&start, river);
    // insertFront(&start, david);
    // printList(start);
    // bubbleSort(start);
    // printList(start);

    // DoublyLinkedList list;
    // list.push(&list.head, river);
    // list.print();

    // DoublyLinkedList list3;
    // list3.push(river);

    // list3.print();


    // insertionSorts(&list2.head);

    // cout << list2.size() << endl;

    // Node* userSearch = list.search("Rivera");
    // if (userSearch != nullptr)
    // {
    //     cout << userSearch->getUser() << ", Age: " << userSearch->getUser().getAge();
    // }
    // else
    // {
    //     cout << "User was not found in list\n";
    // }

    // cout << list.head->getUser() << endl;

}

void initalizeList(DoublyLinkedList& list)
{
    User river("River", 23);
    User julianna("Julianna", 20);
    User david("David", 22);
    User martin("Martin", 22);
    User nikki("Nikki", 11);
    User niall("Niall", 24);
    User shane("Shane", 19);
    User copper("Copper", 2);
    User chayton("Chayton", 23);
    User jared("Jared", 21);

    // Node* node1 = new Node(river, nullptr, nullptr);
    // Node* node2 = new Node(julianna, nullptr, nullptr);
    // Node* node3 = new Node(david, nullptr, nullptr);
    // Node* node4 = new Node(martin, nullptr, nullptr);
    // Node* node5 = new Node(nikki, nullptr, nullptr);
    // Node* node6 = new Node(niall, nullptr, nullptr);
    // Node* node7 = new Node(shane, nullptr, nullptr);
    // Node* node8 = new Node(copper, nullptr, nullptr);
    // Node* node9 = new Node(chayton, nullptr, nullptr);
    // Node* node10 = new Node(jared, nullptr, nullptr);

    // list.insert(node1);
    // list.insert(node2);
    // list.insert(node3);
    // list.insert(node4);
    // list.insert(node5);
    // list.insert(node6);
    // list.insert(node7);
    // list.insert(node8);
    // list.insert(node9);
    // list.insert(node10);
}