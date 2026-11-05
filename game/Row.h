#include <vector>
#include "../shared/CardInstance.h"

struct Row
{
	std::vector<CardInstance> cards;
	int points = 0;
};