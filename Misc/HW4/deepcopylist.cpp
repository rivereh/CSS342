#include "deepcopylist.h"

DeepCopyList::DeepCopyList() : List()
{

}

DeepCopyList::DeepCopyList(Node* node) : List(node)
{

}

DeepCopyList::DeepCopyList(const List& other)
{
    Node* temp = new Node(*other.head);
    while (temp != nullptr)
    {
        push(temp->user);
        temp = temp->next;
    }
}

// This destructor has a complexity of O(n)
DeepCopyList::~DeepCopyList()
{
    Node* temp = head;
    while (temp)
    {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
}