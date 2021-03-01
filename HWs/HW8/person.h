#ifndef PERSON_H
#define PERSON_H
#include <iostream>
using std::string;
using std::ostream;

class Person
{
public:
    Person(string name);
    string getName() const;
    virtual void print(ostream&) const = 0;
private:
    string name;
    friend ostream& operator<<(ostream&, const Person&);
};

#endif /* PERSON_H */