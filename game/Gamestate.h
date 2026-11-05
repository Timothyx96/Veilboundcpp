#include "../shared/Player.h"
#include "../shared/CardDatabase.h"
#include <array>
#include "Row.h"
#include "GamePhase.h"
#include <random>

struct GameState
{
	CardDatabase card_database;
	std::array<Player, 2> players;
	std::array<Row, 4> rows;
	int current_player = 0;
	GamePhase game_phase = GamePhase::Setup;
	std::mt19937 random_sequence;
	std::uniform_int_distribution<int> size;
	GameState()
	{
	}
};