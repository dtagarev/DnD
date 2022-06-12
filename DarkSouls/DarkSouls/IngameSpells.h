#pragma once
#include "Vector.hpp"
#include "SpellsClass.h"
class IngameSpells
{
	Vector<Spell> allSpells;
public:
	IngameSpells();
	void addSpell(const char* name, size_t damageScalerInPrc, size_t mana, size_t neededMaxmana);
};
