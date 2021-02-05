#include <iostream>
using namespace std;

class Point
{
private:
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1) {}
    
    // copy
    Point(const Point &p2) { x = p2.x, y = p2.y; }

    int getX() { return x; }
    int getY() { return y; }
    void setX(int newX) { x = newX; }
    void setY(int newY) { y = newY; }
};

class Entity
{
private:
    int maxHealth;
    int *ptr;
public:
    Entity(int maxHealth)
    {
        // invariant: must be between 1 and 100
        if (maxHealth < 1 || maxHealth > 100)
            maxHealth == 100;
        this->maxHealth = maxHealth;

        this->ptr = &this->maxHealth;
    }
    
    Entity(const Entity& other)
    {
        this->maxHealth = other.maxHealth;
        // this->ptr = &this->maxHealth; // hard copy
        this->ptr = other.ptr; // soft copy
    }



    void showPropertyValues()
    {
        cout << "maxHealth: " << this->maxHealth << endl;
        cout << "ptr: " << this->ptr << endl;
        cout << "address of maxHealth: " << &this->maxHealth << endl;
    }
};

class Node
{
private:
    Entity *ePtr;
public:
    Node(Entity e)
    {
        this->ePtr = &e;
    }

    virtual ~Node()
    {

    }

    void DoSomething()
    {
        this->ePtr->showPropertyValues();
    }
};


int main()
{
    // Point p1(10, 15);
    // Point p2 = p1;

    // cout << p1.getX() << endl;
    // cout << p2.getX() << endl;

    // p2.setX(2);

    // cout << p1.getX() << endl;


    Entity e(99);
    Entity cpy(e);
    e.showPropertyValues();
    Node n(e);
    n.DoSomething();


    // e.showPropertyValues();

    // cout << "------\n";
    
    // cpy.showPropertyValues();

}