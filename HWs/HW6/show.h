#ifndef SHOW_H
#define SHOW_H
#include <iostream>

using std::string;
using std::ostream;

class Show
{
public:
    Show();
    Show(string name, int rating) 
        : name(name), rating(rating) {}
    string name;
    int rating;
    bool operator>(const Show&);
    bool operator<(const Show&);
    bool operator==(const Show&);
private:
    friend ostream& operator<<(ostream&, const Show&);
};

#endif /* SHOW_H */