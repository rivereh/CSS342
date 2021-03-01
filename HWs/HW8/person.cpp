#include "person.h"

Person::Person(string _name)
{
    name = _name;
}

string Person::getName() const
{
    return name;
}

ostream& operator<<(ostream &outStream, const Person &person)
{
	person.print(outStream);
	return outStream;
}