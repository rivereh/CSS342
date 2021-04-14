#include <iostream>
#include <vector>
using namespace std;

class Shape
{
public:
    Shape() : width(0), height(0) {}
    Shape(int _width, int _height) : width(_width), height(_height) {}
    
    int getWidth() { return width; }
    int getHeight() { return height; }
    void setWidth(int _width) { width = _width; }
    void setHeight(int _height) { height = _height; }

    int getArea() { return (width * height); }

    friend ostream& operator<<(ostream& outStream, const Shape& shape)
    {
        outStream << "Width: " << shape.width << "\nHeight: " << shape.height;
        return outStream;
    }

// protected will only be accessible to current class and children
protected:
    int width;
    int height;
};

class Rectangle : public Shape
{
public:
    Rectangle() : Shape() {}
    Rectangle(int _width, int _height) : Shape(_width, _height) {}

    Rectangle operator+(const Rectangle& other)
    {
        Rectangle rect;
        rect.width = width + other.width;
        rect.height = height + other.height;
        return rect;
    }
};

// template stuff
template <typename T>
T getMax(T a, T b)
{
    return (a > b ? a : b);
}


template <typename T>
class Storage
{
    vector<T> data;
public:
    Storage() {}
    Storage(T item) { data.push_back(item); }
    void add(T item) { data.push_back(item); }
    friend ostream& operator<<(ostream& os, Storage& storage)
    {
        if (storage.data.size() <= 0)
        {
            os << "No items in storage";
            return os;
        }

        for (T item : storage.data)
            os << item << " ";
        return os;
    }
};


// tree thing

struct node
{
    node(int _data) : data(_data) {}
    int data;
    node *prev;
    node *next;
};

class DLinkedList
{
public:
    node *front;
    node *end;
    DLinkedList() : front(nullptr), end(nullptr) {}
    void addFront(int data)
    {
        node *temp = new node(data);
        temp->next = front;
        temp->prev = nullptr;

        if (front != nullptr)
            front->prev = temp;

        // only add if end var is included
        if (front == nullptr)
            end = temp;

        front = temp;
    }

    void print()
    {
        node *temp = front;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }

    void printBack()
    {
        node *temp = end;
        while (temp != nullptr)
        {
            cout << temp->data << " ";
            temp = temp->prev;
        }
        cout << endl;
    }

    friend ostream& operator<<(ostream& os, DLinkedList& list)
    {
        node *temp = list.front;
        while (temp != nullptr)
        {
            os << temp->data << " ";
            temp = temp->next;
        }
        return os;
    }

};



void countdown(int * &i) {
  cout << *i;
}


class Parent
{
public:
    virtual void doSomething() = 0;
    Parent()
    {
        cout << "Something (Parent)";
    }
};

class Child : public Parent
{
public:
    virtual void doSomething()
    {
        cout << "Something";
    }
};


int main()
{
    Parent p;
    




    // countdown(9);

   

    // DLinkedList list;
    // list.addFront(4);
    // list.addFront(2);
    // list.addFront(1);

    // // cout << list.front->data << endl;

    // // list.print();
    // // cout << endl;
    // // list.printBack();

    // cout << list << endl;


    // Rectangle rect(1, 2);

    // Rectangle rect2(1, 2);

    // cout << rect2 << endl;

    // Rectangle rect3 = rect + rect2;

    // cout << "Total area of rect: " << rect3.getArea() << endl;

    // cout << getMax<int>(3, 4) << endl;
    // cout << getMax(3, 4) << endl;

    // Storage<int> apple;
    // apple.add(3);
    // apple.add(2);
    // cout << apple << endl;

    // Storage<string> pear;
    // pear.add("River");
    // pear.add("Nikki");
    // cout << pear << endl;








}