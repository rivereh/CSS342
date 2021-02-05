#include <iostream>

using namespace std;

struct ListNode
{
    string item;
    int count;
    ListNode *link;
};
typedef ListNode* ListNodePtr;

    // __________________________________________________________

class IntNode
{
public:
    IntNode() {}
    IntNode(int data, IntNode* link)
            : data(data), link(link) {}
    IntNode* getLink() const { return link; }
    int getData() const { return data; }
    void setData(int data) { this->data = data; }
    void setLink(IntNode* link) { this->link = link; }
private:
    int data;
    IntNode *link;
};
typedef IntNode* IntNodePtr;

void headInsert(IntNodePtr& head, int data);
void insert(IntNodePtr afterMe, int data);

int main()
{
    // ListNodePtr head;
    // head = new ListNode;
    // // ListNode *head = new ListNode;

    // // (*head).count = 12;
    // head->item = "Hello, world!";
    // head->count = 12;

    // cout << (*head).count << endl;
    // cout << head->item << endl;
    // // head->link = nullptr;
    // // cout << head << endl;

    // __________________________________________________________

    IntNodePtr head;
    // head = new IntNode;
    // head->setData(3);
    // head->setLink(nullptr);
    head = new IntNode(3, nullptr);

    cout << head->getData() << endl;

    headInsert(head, 4);

    cout << head->getData() << endl;
    cout << head->getLink()->getData() << endl;

    head->getLink()->setData(10);

    cout << head->getLink()->getData() << endl;

    return 0;
}

void headInsert(IntNodePtr& head, int data)
{
    head = new IntNode(data, head);
}

void insert(IntNodePtr afterMe, int data)
{
    afterMe->setLink(new IntNode(data, afterMe->getLink()));
}