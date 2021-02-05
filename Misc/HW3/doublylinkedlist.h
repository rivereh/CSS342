#ifndef DOUBLYLINKEDLIST_H_
#define DOUBLYLINKEDLIST_H_

#include "user.h"
#include "moderator.h"
#include "admin.h"

class DoublyLinkedList
{
public:
    class Node
    {
    public:
        Node();
        Node(User user, Node* next, Node* prev);
        Node* next;
        Node* prev;
        User user;
    };
    Node* head;
    DoublyLinkedList();
    DoublyLinkedList(Node* node);
    Node* search(string name);
    Node* search(string name, int left, int right);
    Node* get(int index) const;
    int size();
    void push(User user);
    void bubbleSort();
    void bubbleSort(char order);
    void print();
private:
    
};

#endif /* DOUBLYLINKEDLIST_H_ */