#include <string>
#include <iostream>
#include "hourlyemployee.h"
using std::string;
using std::cout;
using std::endl;

HourlyEmployee::HourlyEmployee() : Employee(), wageRate(0), hours(0)
{

}

HourlyEmployee::HourlyEmployee(const string& theName, const string& theNumber, double theWageRate, double theHours)
    : Employee(theName, theNumber), wageRate(theWageRate), hours(theHours)
{

}

void HourlyEmployee::setRate(double newWageRate)
{
    wageRate = newWageRate;
}

double HourlyEmployee::getRate() const
{
    return wageRate;
}

void HourlyEmployee::setHours(double hoursWorked)
{
    hours = hoursWorked;
}

double HourlyEmployee::getHours() const
{
    return hours;
}

void HourlyEmployee::printCheck()
{
    setNetPay(hours * wageRate);
    cout << "\n__________________________________________\n";
    cout << "Pay to the order of " << getName() << endl;
    cout << "The sum of " << getNetPay() << " Dollars\n";
    cout << "__________________________________________\n";
    cout << "Check Stub NON NEGOTIABLE\n";
    cout << "Employee Number: " << getSsn() << endl;
    cout << "Hourly Employee. \nHours Worked: " << hours
         << " Rate: " << wageRate << " Pay: " << getNetPay() << endl;
    cout << "\n__________________________________________\n";
}