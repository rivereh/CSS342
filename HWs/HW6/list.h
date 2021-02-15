#ifndef LIST_H
#define LIST_H

using namespace std;

template <typename T>
class List
{
public:
    int size = 10;
    int used = 0;
    T data[10];
    void print();
    void insert(T);
    void remove(T);
    T search(T);
    void topThree(T);
private:
    template <typename Y>
    friend ostream& operator<<(ostream&, const List<Y>&);
    
};

#endif /* LIST_H */