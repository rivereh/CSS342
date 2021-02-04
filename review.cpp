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


int main()
{

    int var1 = 1;
    int var2 = 2;

    int *var3 = &var1;

    cout << "Address of var1: " << &var1 << endl;
    cout << "Address of var2: " << &var2 << endl;
    cout << "Address of var3: " << *var3 << endl;


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