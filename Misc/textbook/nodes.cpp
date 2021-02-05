#include <iostream>
using namespace std;



class NodeInt
{
public:
    NodeInt();
    NodeInt(int theData, NodeInt* theLink) : data(theData), link(theLink) {}
    NodeInt* getLink() const { return link; }
    int getData() const { return data; }
    void setData(int theData) { data = theData; }
    void setLink(NodeInt* pointer) { link = pointer; }  
private:
    int data;
    NodeInt *link;
};
typedef NodeInt* NodeIntPtr;

void headInsert(NodeIntPtr& head, int theData)
{
    head = new NodeInt(theData, head);
}

void insert(NodeIntPtr afterMe, int theData)
{
    afterMe->setLink(new NodeInt(theData, afterMe->getLink()));
}

int main()
{
    // int test = 4;
    // int &test2 = test;
    // test = 6;

    // cout << test2 << endl;

    // struct ListNode
    // {
    //     string item;
    //     int count;
    //     ListNode *link;
    // };
    // typedef ListNode* ListNodePtr;

    // ListNodePtr head = new ListNode;
    // head->count = 12;
    // head->item = "bagels";

    // cout << head->count << endl;

    

    NodeIntPtr head = new NodeInt(3, nullptr);

    headInsert(head, 4);

    cout << head->getData() << endl;



}