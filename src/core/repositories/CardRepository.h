#pragma once

#include "../entities/Card/Card.h"

class CardRepository
{
public:
	virtual Suit get_suit( Card& card) = 0;
	virtual char get_rank( Card& card)  = 0;
	virtual std::string to_string(Card& card)  = 0;
};
