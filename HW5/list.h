#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>
using std::ostream;
using std::vector;

class List
{
public:
    List();
    ~List();
    int size();
    int find(int);
    virtual void add(int);
    virtual void remove(int);
    friend ostream& operator<<(ostream &outStream, const List &list);
private:
    vector<int> data;
};

#endif /* LIST_H */