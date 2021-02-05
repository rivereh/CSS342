#include <string>
#include <cstdlib>
#include <iostream>
#include "employee.h"
using std::string;
using std::cout;

Employee::Employee()
{

}

Employee::Employee(const string& name, const string& ssn)
    : name(name), ssn(ssn), netPay(0)
{
    
}

string Employee::getName() const
{
    return name;
}

string Employee::getSsn() const
{
    return ssn;
}

double Employee::getNetPay() const
{
    return netPay;
}

void Employee::setName(const string& name)
{
    this->name = name;
}

void Employee::setSsn(const string& ssn)
{
    this->ssn = ssn;
}

void Employee::setNetPay(double netPay)
{
    this->netPay = netPay;
}

void Employee::printCheck() const
{
    cout << "\nERROR: printCheck FUNCTION"
}