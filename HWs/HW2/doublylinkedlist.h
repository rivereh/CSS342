#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

#include "node.h"

class DoublyLinkedList
{
public:
    Node* head;
    DoublyLinkedList();
    DoublyLinkedList(Node* node);
    Node* search(string name) const;
    int size();
    void push(User user);
    void bubbleSort(char order);
    void print();
};

#endif /* DOUBLYLINKEDLIST_H_ */