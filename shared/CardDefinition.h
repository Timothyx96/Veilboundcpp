#include <string>

enum class CardType
{
	Goat,
	Fighter,
	Trickster,
	Regular,
	DynamicDuo
};



struct CardDefinition
{
	std::string id;
	std::string name;
	int base_points;
	CardType card_type;
	std::string effect_name;
	std::string effect_text;
	std::string full_card_art_path;
	std::string fallback_image_path;

};

