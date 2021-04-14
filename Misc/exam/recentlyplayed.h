#ifndef RECENTLYPLAYED_H
#define RECENTLYPLAYED_H

#include "purchased.h"

// chose public because I ran out of time
class RecentlyPlayed : public Purchased
{
public:
    RecentlyPlayed(Song song) : Purchased(song) {}
    bool contains(Song);
    void add(Song);
    int timesPlayed(Song);
    // ran out of time for this
};

#endif /* RECENTLYPLAYED_H */