#include "Game.h"

Game::Game(GameRepository* rules)
	: _rules(rules)
{
	_deck_service->shuffle(_deck);
}

Game::~Game()
{
	delete _rules;
	delete _deck_service;
}
