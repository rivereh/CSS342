#include "node.h"

Node::Node()
{
}

Node::Node(int data, Node* link)
{
    this->data = data;
    this->link = link;
}

