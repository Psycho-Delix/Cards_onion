#pragma once

#include "../Deck/Deck.h"
#include "../../services/GameService/GameService.h"
#include "../../services/DeckService/DeckService.h"

#include <vector>

class Game
{
public:
	Game(GameRepository* rules);
	~Game();
private:
	friend class GameService;

	Deck _deck;
	DeckService* _deck_service;
	std::vector<Card> _player_handler;
	GameRepository* _rules;
};

