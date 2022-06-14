#pragma once
#include <fstream>
#include "Item.h"
#include "../Common/MyString.h"

class Spell : Item
{
	size_t damageScalerInPrc;

public:
	Item* clone() const override;
	Spell();
	Spell(const char* name, size_t dmg, int neededLvl);
	const size_t getDamageScaler() const;
	
	//void setName(const char* name);
	//void setDamageScaler(size_t dmg);
	//void setMana(size_t _mana);

	void writeSpellToFile(std::ofstream& f);
	void readSpellFromFile(std::ifstream& f);
};
