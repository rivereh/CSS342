#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>
using std::ostream;
using std::vector;

class List
{
public:
    int size();
    bool contains(int);
    void add(int);
    void remove(int);
    void print();
protected:
    vector<int> *getData();
private:
    vector<int> data;
};

#endif /* LIST_H */