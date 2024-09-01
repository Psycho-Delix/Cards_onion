#pragma once

#include "../entities/Deck/Deck.h"

class DeckRepository
{
public:
	virtual void shuffle(Deck& deck) = 0;
	virtual Card draw_card(Deck& deck) = 0;
	virtual bool is_empty(Deck& deck) const = 0;
	virtual void set_deck(Deck& deck, std::vector<Card> cards) = 0;
};
