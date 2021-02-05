#ifndef SHALLOWCOPYLIST_H
#define SHALLOWCOPYLIST_H

#include "list.h"

class ShallowCopyList : public List
{
public:
    ShallowCopyList();
    ShallowCopyList(Node* node);
    void copy(const List& other);
    ~ShallowCopyList();
};

#endif /* SHALLOWCOPYLIST_H */