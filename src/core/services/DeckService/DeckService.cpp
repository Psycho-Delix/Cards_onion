#include "DeckService.h"

void DeckService::shuffle(Deck& deck)
{
	std::shuffle(deck._cards.begin(), deck._cards.end(), deck._gen);
}

Card DeckService::draw_card(Deck& deck)
{
	if (!deck._cards.empty()) {
		Card card = deck._cards.back();
		deck._cards.pop_back();
		return card;
	}
	return Card('0', Suit::Hearts);
}

bool DeckService::is_empty(Deck& deck) const
{
	return deck._cards.empty();
}

void DeckService::set_deck(Deck& deck, std::vector<Card> cards)
{
	deck._cards = cards;
}
