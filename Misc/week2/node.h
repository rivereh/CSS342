#ifndef NODE_H
#define NODE_H
#include <iostream>
using namespace std;

class Node
{
public:
    Node();
    Node(int data, Node* link);
    Node* getLink() const;
    void setData(int theData);
    void setLink(Node* pointer);
private:
    int data;
    Node* link;
};

#endif /* NODE_H */