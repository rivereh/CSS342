#ifndef SHOW_H
#define SHOW_H
#include <iostream>

using std::string;

class Show
{
public:
    Show(string name, string genre) 
        : name(name), genre(genre) {}
    string name;
    string genre;
};

#endif /* SHOW_H */