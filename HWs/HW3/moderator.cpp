#include "moderator.h"

Moderator::Moderator(string name, int age): User(name, age)
{
    setJob("Mod");
}
