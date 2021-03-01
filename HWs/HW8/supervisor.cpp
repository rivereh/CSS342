#include "Supervisor.h"

Supervisor::Supervisor(string name) : Person(name) {}

void Supervisor::print(ostream& outStream) const
{
    outStream << "Supervisor: " << getName();
}