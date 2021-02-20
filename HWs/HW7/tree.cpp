#include <iostream>
using namespace std;

class BinaryTree
{
public:
    BinaryTree(int data)
        : data(data), left(nullptr), right(nullptr) {}
    BinaryTree(int data, BinaryTree* left, BinaryTree* right)
        : data(data), left(left), right(right) {}
    int data;
    BinaryTree *left;
    BinaryTree *right;
    // friend ostream& operator<<(ostream& outStream, const BinaryTree& node);

    void preOrder() { preOrder(this); cout << endl; }
    void preOrder(BinaryTree* node)
    {
        if (node == nullptr)
            return;

        cout << *node;
        preOrder(node->left);
        preOrder(node->right);
    }

    void postOrder() { postOrder(this); cout << endl; }
    void postOrder(BinaryTree* node)
    {
        if (node == nullptr)
            return;

        postOrder(node->left);
        postOrder(node->right);
        cout << *node;
    }

    void inOrder() { inOrder(this); cout << endl; }
    void inOrder(BinaryTree* node)
    {
        if (node == nullptr)
            return;

        inOrder(node->left);
        cout << *node;
        inOrder(node->right);
    }

    void breadthFirst() { breadthFirst(this); cout << endl; }
    void breadthFirst(BinaryTree* node)
    {
        int h = height();
        for (int i = 0; i < h; i++)
            printRow(node, i);
    }

    int height() { return height(this); }
    int height(BinaryTree* node)
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

    void printRow(BinaryTree* node, int row)
    {
        if (node == nullptr)
            return;
        if (row == 0)
            cout << *node;
        printRow(node->left, row - 1);
        printRow(node->right, row - 1);
    }

    friend ostream& operator<<(ostream& outStream, const BinaryTree& node)
    {
        // outStream << User.name << " - " << User.age;
        return outStream << node.data << " ";
    }

};


int main()
{
    cout << "Hello\n";


    BinaryTree *root = new BinaryTree(1);
    root->left = new BinaryTree(2);
    root->right = new BinaryTree(3);
    root->left->left = new BinaryTree(4);
    root->left->right = new BinaryTree(5);

    root->preOrder();
    root->inOrder();
    root->postOrder();

    cout << root->height() << endl;

    root->breadthFirst();


}