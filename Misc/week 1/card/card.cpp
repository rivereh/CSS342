#include "card.h"

Card::Card()
{
}

Card::Card(char suit, char rank)
{
	this->suit = suit;
	this->rank = rank;
	updateValue();
}

Card::~Card()
{
}

char Card::getSuit() const
{
	return this->suit;
}

char Card::getRank() const
{
	return this->rank;
}

int Card::getValue() const
{
	return this->value;
}

void Card::setSuit(char suit)
{
	std::string suits = "CDHS";
	suit = toupper(suit);
	if (suits.find(suit) != -1)
	{
		this->suit = suit;
	}
}

void Card::setRank(char rank)
{
	std::string ranks = "A23456789JQK";
	rank = toupper(rank);
	if (ranks.find(rank) != -1)
	{
		this->rank = rank;
	}
	updateValue();
}


Card Card::operator+(const Card &card) const
{
	Card result = *this;
	result.value += card.value;
	return result;
}

Card& Card::operator+=(const int &num)
{
	this->value += num;
	return *this;
}

Card Card::operator-(const Card &card) const
{
	Card result = *this;
	result.value -= card.value;
	return result;
}

Card& Card::operator-=(const int &num)
{
	this->value -= num;
	return *this;
}

bool Card::operator==(const Card &card) const
{
	return((this->suit == card.suit) && (this->rank == card.rank));
}

bool Card::operator!=(const Card &card) const
{
	return ((this->suit != card.suit) || (this->rank != card.rank));
}

ostream& operator<<(ostream &outStream, const Card &card)
{
	outStream << card.suit << card.rank;
	return outStream;
}

istream& operator>>(istream &inStream, Card &card)
{
	inStream >> card.suit >> card.rank;
	card.updateValue();
	return inStream;
}

// face cards = 10
// ace cards = 1 or 11, in this case 1
// numerical card = their numerical value
void Card::updateValue()
{
	std::string faces = "JQKjqk";
	if (faces.find(this->rank) != -1)
	{
		this->value = 10;
	}
	else if (this->rank == 'A' || this->rank == 'a')
	{
		this->value = 1;
	}
	else
	{
		// subtracting '0' from rank will return
		// numerical representation of the char
		this->value = this->rank - '0';
	}
}