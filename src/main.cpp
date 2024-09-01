#include <iostream>

#include "core/services/CardSerrvice/CardService.h"
#include "core/entities/Deck/Deck.h"
#include "core/services/DeckService/DeckService.h"

#include <vector>
using namespace std;


int main()
{
	setlocale(0, "");

	vector<Suit> suit = { Suit::Clubs, Suit::Diamonds, Suit::Hearts, Suit::Spades };

	vector<int> rank = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13 };

	vector<Card> v_card;

	for (int i = 0; i < rank.size(); i++)
	{
		for (int j = 0; j < suit.size(); j++)
		{
			v_card.push_back(Card(rank[i], suit[j]));
		}
	}

	CardService card_service;

	Deck deck;
	DeckService deck_service;

	//deck_service.shuffle(deck);

	deck_service.shuffle(deck);

	int i = 0;
	for (auto& card : v_card) {
		std::cout << card_service.to_string(card);
		cout << endl;
		i++;
		if (i % 4 == 0) {
			cout << endl;
		}
	}

	return 0;
}