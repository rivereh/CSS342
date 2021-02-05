#include "Admin.h"

Admin::Admin(string name, int age): User(name, age)
{
    setJob("Admin");
}
