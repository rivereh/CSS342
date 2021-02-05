#ifndef ADMIN_H_
#define ADMIN_H_

#include "user.h"
using namespace std;

class Admin: public User
{
public:
    Admin(string name, int age);
};

#endif /* ADMIN_H_ */