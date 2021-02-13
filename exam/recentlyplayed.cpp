#include "recentlyplayed.h"

bool RecentlyPlayed::contains(Song song)
{
    for (Song s : data)
    {
        if (s == song)
            return true;
    }
    return false;
}

void RecentlyPlayed::add(Song song)
{
    if (!contains(song))
    {
        data.push_back(song);
    }
    cout << "Song was recently played!\n";
}

int RecentlyPlayed::timesPlayed(Song song)
{
    return song.timesPlayed;
}

// ran out of time