#include <iostream>
using namespace std;




class printData
{
public:
    void print(int i)
    {
        cout << "Printing int: " << i << endl;
    }
    void print(string str)
    {
        cout << "Printing string: " << str << endl;
    }
};

class Box
{
public:
    Box() {}
    Box(int l, int w, int h) : length(l), width(w), height(h) {}
    int length;
    int width;
    int height;

    int getVolume()
    {
        return length * width * height;
    }

    // operator overload
    Box operator+(const Box& other)
    {
        Box box(length + other.length, width + other.width, height + other.height);
        return box;
    }

};

void changeName(string& name)
{
    name = "New name";
}

void changeName2(string& name)
{
    name = "New name2";
}


int main()
{

    // // pointer
    // int i = 1;
    // int *iptr = &i; // holds the address of i
    // int i2 = *iptr; // dereferences i and hold value of '1'

    // cout << i2 << endl;

    string myName = "River";
    // cout << myName << endl;
    changeName(myName);
    cout << &myName << endl;

    string* name2 = &myName;
    cout << name2 << endl;
    changeName2(*name2);
    cout << *name2 << endl;
    cout << myName << endl;

    // Box box1(6, 5, 2);
    // Box box2(1, 2, 3);
    // cout << box1.getVolume() << endl;
    // cout << box2.getVolume() << endl;
    // Box box3;
    // box3 = box1 + box2;
    // cout << box3.length << endl;

    // const char *word = "Hello";
    // cout << word << endl;
    // printData pd;
    // pd.print(24);
    // pd.print("Hello");


}