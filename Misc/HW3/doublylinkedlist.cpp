#include "doublylinkedlist.h"

// Inner node class
DoublyLinkedList::Node::Node()
{
}

DoublyLinkedList::Node::Node(User user, Node* next, Node* prev)
{
    this->user = user;
    this->next = next;
    this->prev = prev;
}

// DoublyLinkedList class
DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
}

DoublyLinkedList::DoublyLinkedList(Node* node)
{
    head = node;
}

DoublyLinkedList::Node* DoublyLinkedList::search(string name)
{
    return search(name, 0, size());
}

// This linear recursive search method has a complexity of O(n)
// it is the same as the non recursive linear search method
DoublyLinkedList::Node* DoublyLinkedList::search(string name, int left, int right)
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

DoublyLinkedList::Node* DoublyLinkedList::get(int index) const
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

int DoublyLinkedList::size()
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

void DoublyLinkedList::push(User user)
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

// helper function for bubbleSort
void swapUser(User& user1, User& user2)
{
    User temp;
    temp = user1;
    user1 = user2;
    user2 = temp;
}

// Sort list in ascending order by default
void DoublyLinkedList::bubbleSort()
{
    bubbleSort('a');
}

// Bubble sort has a complexity of O(n^2)
void DoublyLinkedList::bubbleSort(char order)
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
            if (order == 'a' || order == 'A')
            {
                if (current->user.getAge() > current->next->user.getAge())
                {
                    swapUser(current->user, current->next->user);
                    swapped = true;
                }
            }
            else if (order == 'd' || order == 'D')
            {
                if (current->user.getAge() < current->next->user.getAge())
                {
                    swapUser(current->user, current->next->user);
                    swapped = true;
                }   
            }
            current = current->next;
        }
        temp = current;
    }
    while(swapped);
}

void DoublyLinkedList::print()
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