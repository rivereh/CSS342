#ifndef DEEPCOPYLIST_H
#define DEEPCOPYLIST_H

#include "list.h"

class DeepCopyList : public List
{
public:
    DeepCopyList();
    DeepCopyList(Node* node);
    DeepCopyList(const List& other);
    ~DeepCopyList();
};

#endif /* DEEPCOPYLIST_H */