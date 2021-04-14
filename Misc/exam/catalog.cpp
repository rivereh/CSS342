#include "catalog.h"

Catalog::Catalog(Song song)
{
    data.push_back(song);
}

Catalog::Catalog(const Catalog &other)
{
    for (Song s : other.data)
    {
        data.push_back(s);
    }
}

bool Catalog::find(Song song)
{
    for (Song s : data)
    {
        if (s == song)
            return true;
    }
    return false;
}

void Catalog::print()
{
    for (Song s : data)
    {
        cout << s;
    }
}
