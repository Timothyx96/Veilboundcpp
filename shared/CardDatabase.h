#include <deque>
#include "CardDefinition.h"

struct CardDatabase
{
	std::deque<CardDefinition> card_definitions;
};