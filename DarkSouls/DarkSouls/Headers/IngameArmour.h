#pragma once
#include "ArmourClass.h"
#include "../Templates/Vector.hpp"

class IngameArmour
{
	Vector<Armour> allArmour;
public:
	IngameArmour();
	void addArmour(const char* name, size_t blockPercentage, size_t neededMaxStrength);
};
