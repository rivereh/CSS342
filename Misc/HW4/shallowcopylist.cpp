#include "shallowcopylist.h"

ShallowCopyList::ShallowCopyList() : List()
{

}

ShallowCopyList::ShallowCopyList(Node* node) : List(node)
{

}

ShallowCopyList::ShallowCopyList(const List& other)
{
    head = other.head;
}

// This destructor has a complexity of O(n)
ShallowCopyList::~ShallowCopyList()
{
    Node* temp = head;
    while (temp)
    {
        Node* next = temp->next;
        delete temp;
        temp = next;
    }
}