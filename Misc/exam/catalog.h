#ifndef CATALOG_H
#define CATALOG_H

#include <iostream>
#include <vector>
#include "song.h"
using namespace std;

class Catalog
{
public:
    Catalog(Song);
    Catalog(const Catalog &other);
    bool find(Song);
    virtual void add(Song) = 0;
    virtual void remove(Song) {};
    void print();
    vector<Song> data;
};

#endif /* CATALOG_H */