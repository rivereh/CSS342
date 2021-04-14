#include "song.h"

Song::Song(string title, string artist) : title(title), artist(artist) {}

string Song::getTitle() const
{
    return title;
}

string Song::getArtist() const
{
    return artist;
}

void Song::setTitle(string title)
{
    this->title = title;
}

void Song::setArtist(string artist)
{
    this->artist = artist;
}

bool Song::operator==(const Song& other)
{
    return (title == other.title && artist == other.artist);
}

ostream& operator<<(ostream &outStream, const Song &song)
{
	outStream << song.artist << ": " << song.title << endl;
	return outStream;
}