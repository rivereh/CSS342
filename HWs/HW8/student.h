#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"

class Student : public Person
{
public:
    Student(string name);
    void print(ostream&) const;
};

#endif /* STUDENT_H */