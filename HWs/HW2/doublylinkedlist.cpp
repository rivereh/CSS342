#include "doublylinkedlist.h"

DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr; 
}
    
DoublyLinkedList::DoublyLinkedList(Node* node)
{
    head = node;
}

// This linear search method has a complexity of O(n)
Node* DoublyLinkedList::search(string name) const
{
    if (head->user.getName() == name)
    {
        return head;
    }
    else
    {
        Node* temp = head;
        while (temp != nullptr)
        {
            if (temp->user.getName() == name)
            {
                return temp;
            }
            temp = temp->next;
        }
    }
    return nullptr;
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
            cout << temp->user.getName() << "\t- Age: " << temp->user.getAge() << endl;
            temp = temp->next;
        }
    }
}