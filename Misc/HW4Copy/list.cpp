#include "list.h"

// Inner node class
List::Node::Node()
{
}

List::Node::Node(User user, Node* next, Node* prev)
{
    this->user = user;
    this->next = next;
    this->prev = prev;
}

// List class
List::List()
{
    head = nullptr;
}

List::List(Node* node)
{
    head = node;
}

List::~List()
{
    
}

List::Node* List::search(string name)
{
    return search(name, 0, size());
}

// This linear recursive search method has a complexity of O(n)
// it is the same as the non recursive linear search method
List::Node* List::search(string name, int left, int right)
{
    if (right < 1)
    {
        return nullptr;
    }
    else if (get(left)->user.getName() == name)
    {
        return get(left);
    }
    else if (get(right)->user.getName() == name)
    {
        return get(right);
    }
    return search(name, left + 1, right - 1);
}

List::Node* List::get(int index) const
{
    int searchIndex = 0;
    if (index == 0)
    {
        return head;
    }
    else
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            searchIndex++;
            if (searchIndex == index)
            {
                return temp;
            }
            temp = temp->next;
        }
    }
}

int List::size()
{
    int count = 0;
    if (head == nullptr)
    {
        return count;
    }
    else
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            count++;
            temp = temp->next;
        }
    }
    return count;
}

// adds node to front of list
void List::push(User user)
{
    Node* current = new Node;
    current->user = user;
    current->next = head;
    if (head != nullptr)
    {
        head->prev = current;
    }
    head = current;
}

// removes last node in list
void List::pop()
{
    get(size() - 1)->next = nullptr;
}

// helper function for bubbleSort
void swapUser(User& user1, User& user2)
{
    User temp;
    temp = user1;
    user1 = user2;
    user2 = temp;
}

// Bubble sort has a complexity of O(n^2)
void List::bubbleSort()
{
    bool swapped;
    Node* current;
    Node *temp = nullptr;

    if (head == nullptr)
    {
        return;
    }

    do
    {
        swapped = false;
        current = head;

        while (current->next != temp)
        {
            if (current->user.getAge() > current->next->user.getAge())
            {
                swapUser(current->user, current->next->user);
                swapped = true;
            }
            current = current->next;
        }
        temp = current;
    }
    while(swapped);
}

void List::print()
{
    if (head == nullptr)
    {
        cout << "No items in list\n";
    }
    else {
        Node* temp = head;
        while (temp != nullptr)
        {
            cout << temp->user << endl;
            temp = temp->next;
        }
    }
}

bool List::operator==(const List& other) const
{
    if (head == other.head)
        return true;
    return false;
}