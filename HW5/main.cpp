#include <iostream>
#include "list.h"
#include "set.h"
#include "queue.h"
#include "stack.h"
using std::endl;
using std::cout;

int main()
{
    // List demonstration
    cout << "List demonstration:\n";
    List list;
    list.add(1);
    list.add(1); // adding duplicates
    list.add(2);
    list.add(3);
    list.print();
    cout << endl;

    // Set demonstration
    cout << "Set demonstration:\n";
    Set set;
    set.add(1);
    set.add(1); // adding duplicates, will return error
    set.add(2);
    set.add(3);
    set.print();
    cout << endl;

    // Queue demonstration
    cout << "Queue demonstration:\n";
    Queue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.print();
    cout << "Dequeued " << queue.dequeue() << " from queue!\n";
    queue.print();
    cout << endl;

    // Stack demonstration
    cout << "Stack demonstration:\n";
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.print();
    cout << "Popped " << stack.pop() << " from stack!\n";
    stack.print();
    cout << endl;
}