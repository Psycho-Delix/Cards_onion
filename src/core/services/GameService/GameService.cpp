#include "GameService.h"

void GameService::start_game(Game& game)
{
	game._player_handler.push_back(game._deck_service->draw_card(game._deck));
	game._player_handler.push_back(game._deck_service->draw_card(game._deck));
}

void GameService::play_turn(Game& game)
{
	game._player_handler.push_back(game._deck_service->draw_card(game._deck));
}

int GameService::get_score(Game& game)
{
	return calculate_score(game._player_handler);
}

std::vector<Card> GameService::get_player_handler(Game& game) const
{
	return game._player_handler;
}

bool GameService::is_game_over(Game& game) const
{
	return is_game_over(game._player_handler);
}

bool GameService::is_game_over(const std::vector<Card>& player_hand) const
{
	return false;
}

int GameService::calculate_score(const std::vector<Card>& player_hend) const
{
	return 0;
}
