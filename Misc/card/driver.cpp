// 
//  The Card class allows the creation of cards which
//  are displayed as "C7" for 7 of Clubs or "SA" for
//  Ace of Spades
//

#include <iostream>
#include "card.h"

int main()
{
	// creating two cards and comparing them
	Card card1('C', 'Q');
	std::cout << "Card 1: " << card1 << ", Value: " << card1.getValue() << std::endl;

	Card card2('S', '3');
	std::cout << "Card 2: " << card2 << ", Value: " << card2.getValue() << std::endl;

	if (card1 != card2)
	{
		std::cout << "Card 1 does not equal card 2!\n";
	}

	// creating an ace card with a default value of 1 and
	// adding 10 to make it worth 11
	Card card3('H', 'A');
	std::cout << "Card 3: " << card3 <<  ", Value: " << card3.getValue() << std::endl;
	std::cout << "Changing Card 3's ace value to 11...\n";
	card3 += 10;
	std::cout << "Updated Card 3: " << card3 <<  ", Value: " << card3.getValue() << std::endl;

	// any card with a value of 8 will work, ex. D 8
	std::cout << "\nUsing cards 1 and 2, enter a new card that will help you reach 21!\n";
	std::cout << "Enter card suit and rank: ";
	Card card4;
	std::cin >> card4;

	// simple game of blackjack by getting the values of three cards
	int handSum = (card1 + card2 + card4).getValue();
	if (handSum == 21)
	{
		std::cout << "Blackjack!\n";
	}
	else if (handSum < 21)
	{
		std::cout << "You are " << 21 - handSum << " below getting a Blackjack!";
	}
	else
	{
		std::cout << "You are " << handSum - 21 << " above getting a Blackjack!";
	}

	return 0;
}
