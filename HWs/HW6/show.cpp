#include "show.h"

Show::Show()
{
    
}

// comparison operators compare a shows rating
bool Show::operator>(const Show& other)
{
    return rating > other.rating;
}

bool Show::operator<(const Show& other)
{
    return rating < other.rating;
}

bool Show::operator==(const Show& other)
{
    return rating == other.rating; 
}

ostream& operator<<(ostream& outStream, const Show& show)
{
    outStream << show.name << " - " << show.rating << "/" << "100";
	return outStream;
}