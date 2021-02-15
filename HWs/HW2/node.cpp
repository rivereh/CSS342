#include "node.h"

Node::Node()
{
}

Node::Node(User user, Node* next, Node* prev)
{
    this->user = user;
    this->next = next;
    this->prev = prev;
}

ostream& operator<<(ostream &outStream, const Node &node)
{
	outStream << "User: " << node.user;
	return outStream;
}