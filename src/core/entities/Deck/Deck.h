#pragma once

#include "../Card/Card.h"

#include <vector>
#include <random>
#include <ostream>

class Deck
{
public:
	Deck();

private:
	friend class DeckService;

	std::vector<Card> _cards;
	std::random_device _rd;
	std::mt19937 _gen;
};

