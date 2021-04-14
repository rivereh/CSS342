#include "purchased.h"

void Purchased::add(Song song)
{
    for (Song s : data)
    {
        if (s == song)
        {
            cout << "Song already added!\n";
            return;
        }
    }
    data.push_back(song);
}

void Purchased::remove(Song song)
{
    int index = 0;
    for (Song s : data)
    {
        if (s == song)
        {
            data.erase(data.begin() + index);
        }
        index++;
    }
}