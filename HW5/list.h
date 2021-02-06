#ifndef LIST_H
#define LIST_H

#include <iostream>
#include <vector>

class List
{
public:
    List();
    ~List();
    int size();
    int find(int);
    virtual void add(int);
    virtual void remove(int);
    void print();
    // bool operator==(const List& other) const;
private:
    std::vector<int> data;
};

#endif /* LIST_H */