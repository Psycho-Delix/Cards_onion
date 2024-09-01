#pragma once

#include "../../repositories/CardRepository.h"

class CardService : public CardRepository
{
public:
	Suit get_suit( Card& card) override;
	char get_rank( Card& card)  override;
	std::string to_string(Card& card) override;
};

