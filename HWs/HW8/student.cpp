#include "student.h"

Student::Student(string name) : Person(name) {}

void Student::print(ostream& outStream) const
{
    outStream << "Student: " << getName();
}