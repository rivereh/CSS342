#pragma once
#include <iostream>
#include <ctype.h>
using namespace std;

class Card
{
	friend ostream& operator<<(ostream &outStream, const Card &card);
	friend istream& operator>>(istream &inStream, Card &card);

public:

	// constructors
	Card();
	Card(char suit, char rank);
	~Card();

	// getters / setters
	char getSuit() const;
	char getRank() const;
	int getValue() const;
	void setSuit(char suit);
	void setRank(char rank);

	// operation overloads
	Card operator-(const Card &card) const;
	Card& operator-=(const int &num);

	Card operator+(const Card &card) const;
	Card& operator+=(const int &num);

	bool operator==(const Card &card) const;
	bool operator!=(const Card &card) const;

private:
	char suit;
	char rank;
	int value;
	void updateValue();
};

