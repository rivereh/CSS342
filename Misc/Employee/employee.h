#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
using std::string;

class Employee
{
public:
    Employee();
    Employee(const string& name, const string& ssn);
    string getName() const;
    string getSsn() const;
    double getNetPay() const;
    void setName(const string& name);
    void setSsn(const string& ssn);
    void setNetPay(double netPay);
    void printCheck() const;
private:
    string name;
    string ssn;
    double netPay;
};

#endif /* EMPLOYEE_H */