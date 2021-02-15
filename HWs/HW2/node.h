#ifndef NODE_H_
#define NODE_H_

#include "user.h"

class Node
{
public:
    Node();
    Node(User user, Node* next, Node* prev);
    Node* next;
    Node* prev;
    User user;
private:
    friend ostream& operator<<(ostream &outStream, const Node &node);
};

#endif /* NODE_H_ */