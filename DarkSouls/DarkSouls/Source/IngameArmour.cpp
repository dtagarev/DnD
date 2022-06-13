#include "../Headers/IngameArmour.h"

void IngameArmour::addArmour(const char* name, size_t blockPercentage, size_t neededMaxStrength)
{
	Armour customArmour(name, blockPercentage, neededMaxStrength);
	allArmour.add(customArmour);
}
