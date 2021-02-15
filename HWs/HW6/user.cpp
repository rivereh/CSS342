#include "user.h"

User::User()
{
    
}

// comparison operators compare a Users age
bool User::operator>(const User& other)
{
    return age > other.age;
}

bool User::operator<(const User& other)
{
    return age < other.age;
}

bool User::operator==(const User& other)
{
    return age == other.age; 
}

ostream& operator<<(ostream& outStream, const User& User)
{
    outStream << User.name << " - " << User.age;
	return outStream;
}