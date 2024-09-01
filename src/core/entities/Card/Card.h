#pragma once


#include <string>
#include <ostream>

enum class Suit { Hearts, Diamonds, Clubs, Spades };

class Card
{
public:
	Card(int rank, Suit suit);

private:
	friend class CardService;

	int _rank;
	Suit _suit;
};

