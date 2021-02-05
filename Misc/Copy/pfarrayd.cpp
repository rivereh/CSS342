#include <iostream>
using std::cout;
#include "pfarrayd.h"

PFArrayD::PFArrayD() : capacity(50), used(0)
{
    a = new double[capacity];
}

PFArrayD::PFArrayD(int size) : capacity(size), used(0)
{
    a = new double[capacity];
}

PFArrayD::PFArrayD(const PFArrayD& pfaObject) : capacity(pfaObject.getCapacity()), used(pfaObject.getNumbersUsed())
{
    a = new double[capacity];
    for (int i = 0; i < used; i++)
        a[i] = pfaObject.a[i];
}

int PFArrayD::getCapacity() const
{
    return capacity;
}

int PFArrayD::getNumbersUsed() const
{
    return used;
}

double& PFArrayD:: operator[] (int index)
{
    if (index >= used)
    {
        cout << "Illegal index in PFArrayD.\n";
        exit(0);
    }
    return a[index];
}

PFArrayD& PFArrayD::operator =(const PFArrayD& rightSide)
{
    if (capacity != rightSide.capacity)
    {
        delete [] a;
        a = new double[rightSide.capacity];
    }

    capacity = rightSide.capacity;
    used = rightSide.used;
    for (int i = 0; i < used; i++)
        a[i] = rightSide.a[i];
    
    return *this;
}

PFArrayD::~PFArrayD()
{
    delete [] a;
    cout << "deconstuctor called\n";
}