#include "binarytree.h"

int main()
{

    //              50
    //             /  \
    //           40    60
    //          /     /  \
    //        30    55    70
    //       /
    //     10
    //    /  \
    //   5    20
    //  /
    // 1

    BinaryTree *leftUnbalancedTree = new BinaryTree(50);
    leftUnbalancedTree->add(40);
    leftUnbalancedTree->add(60);
    leftUnbalancedTree->add(30);
    leftUnbalancedTree->add(10);
    leftUnbalancedTree->add(5);
    leftUnbalancedTree->add(20);
    leftUnbalancedTree->add(70);
    leftUnbalancedTree->add(55);
    leftUnbalancedTree->add(1);

    cout << "Left-unbalanced tree demonstration: \n";
    cout << "Preorder: ";
    leftUnbalancedTree->preorder();
    cout << "Postorder: ";
    leftUnbalancedTree->postorder();
    cout << "Inorder: ";
    leftUnbalancedTree->inorder();
    cout << "Breadth-first: ";
    leftUnbalancedTree->breadthFirst();
    cout << endl;

    /* ------------------------------------ */

    //   10
    //  /   \
    // 5     20
    //  \    / \
    //   8  15  30
    //            \
    //             40
    //             / \
    //            33  50
    //                 \
    //                 60

    BinaryTree *rightUnbalancedTree = new BinaryTree(10);
    rightUnbalancedTree->add(5);
    rightUnbalancedTree->add(8);
    rightUnbalancedTree->add(20);
    rightUnbalancedTree->add(15);
    rightUnbalancedTree->add(30);
    rightUnbalancedTree->add(40);
    rightUnbalancedTree->add(33);
    rightUnbalancedTree->add(50);
    rightUnbalancedTree->add(60);

    cout << "Right-unbalanced tree demonstration: \n";
    cout << "Preorder: ";
    rightUnbalancedTree->preorder();
    cout << "Postorder: ";
    rightUnbalancedTree->postorder();
    cout << "Inorder: ";
    rightUnbalancedTree->inorder();
    cout << "Breadth-first: ";
    rightUnbalancedTree->breadthFirst();
    cout << endl;

    /* ------------------------------------ */

    //           30
    //         /   \
    //       25     40
    //      / \     / \
    //    18  27   35  50
    //   / \      /      \
    // 10   20   32      60

    BinaryTree *balancedTree = new BinaryTree(30);
    balancedTree->add(25);
    balancedTree->add(27);
    balancedTree->add(18);
    balancedTree->add(10);
    balancedTree->add(20);
    balancedTree->add(40);
    balancedTree->add(50);
    balancedTree->add(60);
    balancedTree->add(35);
    balancedTree->add(32);

    cout << "Balanced tree demonstration: \n";
    cout << "Preorder: ";
    balancedTree->preorder();
    cout << "Postorder: ";
    balancedTree->postorder();
    cout << "Inorder: ";
    balancedTree->inorder();
    cout << "Breadth-first: ";
    balancedTree->breadthFirst();
}