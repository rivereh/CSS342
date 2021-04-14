#ifndef SONG_H
#define SONG_H

#include <iostream>
using namespace std;

class Song
{
public:
    Song(string, string);
    string getTitle() const;
    string getArtist() const;
    void setTitle(string);
    void setArtist(string);
    friend ostream& operator<<(ostream &outStream, const Song &song);
    bool operator==(const Song&);
    int timesPlayed;
private:
    string title;
    string artist;
};

#endif /* SONG_H */