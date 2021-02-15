#include "shallowcopylist.h"

ShallowCopyList::ShallowCopyList() : List()
{

}

ShallowCopyList::ShallowCopyList(Node* node) : List(node)
{

}

void ShallowCopyList::copy(const List& other)
{
    head = other.head;
}

ShallowCopyList::~ShallowCopyList()
{

}