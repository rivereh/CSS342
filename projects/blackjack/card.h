#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>

using namespace std;

class Card
{
public:
    enum rank {ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN,
        EIGHT, NINE, TEN, JACK, QUEEN, KING};

    enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};

    friend ostream& operator<<(ostream& os, const Card& card)
    {
        
    }
    

private:
    rank myRank;
    suit mySuit;
    bool isFaceUp;

};