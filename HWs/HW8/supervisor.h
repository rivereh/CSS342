#ifndef SUPERVISOR_H
#define SUPERVISOR_H
#include "person.h"

// I chose to have supervisor inherit from person instead of instructor because
// I wouldn't assume a supervisor would know how to instruct a class so it shouldn't
// need to inherit that from the Instructor class.
class Supervisor : public Person
{
public:
    Supervisor(string name);
    void print(ostream&) const;
};

#endif /* SUPERVISOR_H */