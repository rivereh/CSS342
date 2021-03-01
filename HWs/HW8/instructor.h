#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H
#include "person.h"

class Instructor : public Person
{
public:
    Instructor(string name);
    void print(ostream&) const;
};

#endif /* INSTRUCTOR_H */