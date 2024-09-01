#pragma once

#include "../../repositories/DeckRepository.h"

class DeckService : public DeckRepository
{
public:
	void shuffle(Deck& deck) override;
	Card draw_card(Deck& deck) override;
	bool is_empty(Deck& deck) const override;
	void set_deck(Deck& deck, std::vector<Card> cards) override;
};

