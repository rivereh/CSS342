#include <iostream>
#include <vector>
using namespace std;

class Tree
{
public:
    Tree(int data)
        : data(data) {}
    int data;
    vector<Tree *> child;
};



int main()
{
    
}