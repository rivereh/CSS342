#ifndef LIST_H
#define LIST_H

#include "user.h"

class List
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
    List();
    List(Node* node);
    ~List();
    Node* search(string name);
    Node* search(string name, int left, int right);
    Node* get(int index) const;
    int size();
    void push(User user);
    void pop();
    void bubbleSort();
    void print();
    bool operator==(const List& other) const;
    virtual void copy(const List& other) = 0;
private:
    
};

#endif /* LIST_H */