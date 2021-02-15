#ifndef MODERATOR_H_
#define MODERATOR_H_

#include "user.h"
using namespace std;

class Moderator: public User
{
public:
    Moderator(string name, int age);
};

#endif /* MODERATOR_H_ */