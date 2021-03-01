#include "Instructor.h"

Instructor::Instructor(string name) : Person(name) {}

void Instructor::print(ostream& outStream) const
{
    outStream << "Instructor: " << getName();
}