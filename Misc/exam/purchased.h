#ifndef PURCHASED_H
#define PURCHASED_H

#include "catalog.h"

// chose public because I ran out of time
class Purchased : public Catalog
{
public:
    Purchased(Song song) : Catalog(song) {}
    void add(Song);
    void remove(Song);
    // ran out of time on sorting
};

#endif /* PURCHASED_H */