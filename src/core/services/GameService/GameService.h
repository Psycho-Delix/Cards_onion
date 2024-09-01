#pragma once

#include "../../repositories/GameRepository.h"

class GameService : public GameRepository
{
public:
	void start_game(Game& game) override;
	void play_turn(Game& game) override;
	int get_score(Game& game) override;
	std::vector<Card> get_player_handler(Game& game) const override;
	bool is_game_over(Game& game) const  override;
	bool is_game_over(const std::vector<Card>& player_hand) const override;
	int calculate_score(const std::vector<Card>& player_hend) const override;
};

