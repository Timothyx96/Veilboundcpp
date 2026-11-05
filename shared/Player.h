#include <vector>
#include <string>
#include "CardInstance.h"

struct Player
{
	std::string name;
	std::vector<CardInstance> cards_in_hand;
};