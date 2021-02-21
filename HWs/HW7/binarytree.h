#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
using std::cout;
using std::endl;
using std::ostream;


class BinaryTree
{
public:
    BinaryTree(int data)  
        : data(data), left(nullptr), right(nullptr) {}

    int data;
    BinaryTree *left;
    BinaryTree *right;

    BinaryTree* add(int);
    BinaryTree* add(BinaryTree*, int);

    void preorder();
    void preorder(BinaryTree*);
    void postorder();
    void postorder(BinaryTree*);
    void inorder();
    void inorder(BinaryTree*);
    void breadthFirst();
    void breadthFirst(BinaryTree*);

    int height();
    int height(BinaryTree*);
    void printRow(BinaryTree*, int);
};

#endif /* BINARYTREE_H */