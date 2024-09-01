#pragma once

#include "../entities/Card/Card.h"
#include "../../entities/Game/Game.h"

#include <vector>

class GameRepository
{
public:
	virtual void start_game(Game& game) = 0;
	virtual void play_turn(Game& game) = 0;
	virtual int get_score(Game& game) = 0;
	virtual std::vector<Card> get_player_handler(Game& game) const = 0;
	virtual bool is_game_over(Game& game) const = 0;
	virtual bool is_game_over(const std::vector<Card>& player_hand) const = 0;
	virtual int calculate_score(const std::vector<Card>& player_hend) const = 0;
};

