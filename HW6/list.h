#ifndef LIST_H
#define LIST_H

using namespace std;

template <typename T>
class List
{
public:
    int size = 10;
    int used = 5;
    T data[10];
    void sort();
    void print();
    void insert(T);
    void remove(T);
    bool search(T);
private:
    friend ostream& operator<<(ostream &, const List<T> &);
};

#endif /* LIST_H */