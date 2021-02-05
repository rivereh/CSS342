#include "deepcopylist.h"

DeepCopyList::DeepCopyList() : List()
{

}

DeepCopyList::DeepCopyList(Node* node) : List(node)
{

}

void DeepCopyList::copy(const List& other)
{
    Node* temp = new Node(*other.head);
    while (temp != nullptr)
    {
        push(temp->user);
        temp = temp->next;
    }
}

// This destructor has a complexity of O(n)
// It's important to delete the nodes to free the memory that
// the program used
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