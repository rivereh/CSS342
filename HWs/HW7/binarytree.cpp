#include "binarytree.h"


BinaryTree* BinaryTree::add(int data) { add(this, data); }
BinaryTree* BinaryTree::add(BinaryTree* node, int data)
{
    if (node == nullptr)
        return new BinaryTree(data);

    if (data > node->data)
        node->right = add(node->right, data);
    else
        node->left = add(node->left, data);

    return node;
}

void BinaryTree::preorder() { preorder(this); cout << endl; }
void BinaryTree::preorder(BinaryTree* node)
{
    if (node == nullptr)
        return;

    cout << node->data << " ";
    preorder(node->left);
    preorder(node->right);
}

void BinaryTree::postorder() { postorder(this); cout << endl; }
void BinaryTree::postorder(BinaryTree* node)
{
    if (node == nullptr)
        return;

    postorder(node->left);
    postorder(node->right);
    cout << node->data << " ";
}

void BinaryTree::inorder() { inorder(this); cout << endl; }
void BinaryTree::inorder(BinaryTree* node)
{
    if (node == nullptr)
        return;

    inorder(node->left);
    cout << node->data << " ";
    inorder(node->right);
}

void BinaryTree::breadthFirst() { breadthFirst(this); cout << endl; }
void BinaryTree::breadthFirst(BinaryTree* node)
{
    int h = height();
    for (int i = 0; i < h; i++)
        printRow(node, i);
}

int BinaryTree::height() { return height(this); }
int BinaryTree::height(BinaryTree* node)
{
    if (node == nullptr)
        return 0;

    int left = height(node->left);
    int right = height(node->right);

    if (left > right)
        return (left + 1);
    else
        return (right + 1);
}

void BinaryTree::printRow(BinaryTree* node, int row)
{
    if (node == nullptr)
        return;
    if (row == 0)
        cout << node->data << " ";
    printRow(node->left, row - 1);
    printRow(node->right, row - 1);
}
