#ifndef USER_H
#define USER_H
#include <iostream>

using std::string;
using std::ostream;

class User
{
public:
    User();
    User(string name, int age) 
        : name(name), age(age) {}
    string name;
    int age;
    bool operator>(const User&);
    bool operator<(const User&);
    bool operator==(const User&);
private:
    friend ostream& operator<<(ostream&, const User&);
};

#endif /* USER_H */