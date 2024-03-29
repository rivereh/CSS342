#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include <string>
#include "employee.h"

using std::string;

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee();
    SalariedEmployee(const string& theName, const string& theSsn, double theWeeklySalary);
    double getSalary() const;
    void setSalary(double newSalary);
    void printCheck();
private:
    double salary; // weekly
};

#endif //SALARIEDEMPLOYEE_H