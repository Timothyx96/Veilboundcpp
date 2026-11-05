#include "CardDefinition.h"

struct CardInstance
{
	int base_point_modifier;
	int bonus_points;
	int row;
	int owner;
	bool is_revealed;
	bool is_eliminated;
	const CardDefinition& card_definition;
	
	CardInstance(const CardDefinition& starting_card_definition, int starting_owner)
		: base_point_modifier(0),
		  bonus_points(0),
		  row(-1),
		  is_revealed(false),
		  is_eliminated(false),
		  card_definition(starting_card_definition),
		  owner(starting_owner)
	{
	}

};