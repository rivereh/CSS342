#include "user.h"

User::User()
{
}

User::User(string name, int age)
{
    this->name = name;
    this->age = age;
    this->job = "User";
}

User::User(string name, string email, string job, int age)
{
    this->name = name;
    this->email = email;
    this->job = job;
    this->age = age;
}

string User::getName() const
{
    return this->name;
}

string User::getEmail() const
{
    return this->email;
}

string User::getJob() const
{
    return this->job;
}

int User::getAge() const
{
    return this->age;
}

void User::setName(string name)
{
    this->name = name;
}

void User::setEmail(string email)
{
    this->email = email;
}

void User::setJob(string job)
{
    this->job = job;
}

ostream& operator<<(ostream &outStream, const User &user)
{
	outStream << user.job << ": " << user.name << ", Age:" << user.age;
	return outStream;
}