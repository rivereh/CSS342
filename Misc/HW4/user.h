#ifndef USER_H_
#define USER_H_

#include <iostream>
using namespace std;

class User
{
public:
    User();
    User(string name, int age);
    User(string name, string email, string job, int age);
    string getName() const;
    string getEmail() const;
    string getJob() const;
    int getAge() const;
    void setName(string name);
    void setEmail(string email);
    void setJob(string job);
private:
    string name;
    string email;
    string job;
    int age;
    friend ostream& operator<<(ostream &outStream, const User &user);
};

#endif /* USER_H_ */