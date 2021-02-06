#include <iostream>
#include "list.h"
#include "set.h"
#include "queue.h"
#include "stack.h"

using std::endl;
using std::cout;

int main()
{
    List newList;

    newList.add(2);
    newList.add(3);
    newList.add(4);

    // cout << newList << endl;
    // cout << newList.contains(6) << endl;


    // Set newSet;
    // newSet.add(4);
    // newSet.add(4);
    // newSet.add(4);
    // cout << newSet.size() << endl;

    Queue newQ;
    newQ.enqueue(1);
    newQ.enqueue(2);
    newQ.enqueue(3);
    newQ.enqueue(4);
    
    // newQ.print();

    newQ.dequeue();
    // newQ.print();

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    

    s.print();
    s.pop();
    s.print();

    // newQ.size();

    // cout << newQ << endl;
    


    // cout << newList.find(2) << endl;

    // newList.print();
    // newList.remove(0);
    // newList.print();


}