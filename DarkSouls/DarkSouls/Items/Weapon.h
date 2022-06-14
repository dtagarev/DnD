#pragma once
#include "../Common/MyString.h"
#include "Item.h"
#include <fstream>

class Weapon : Item
{
	size_t damageScalerInPrc = 0;
public:
	Item* clone() const override;
	Weapon();
	Weapon(const char* name, size_t dmg, int neededLvl);
	const size_t getDamageScaler() const;

	//void setName(const char* name);
	//void setDamageScaler(size_t dmg);

	void writeWeaponToFile(std::ofstream& f);
	void readWeaponFromFile(std::ifstream& f);
};
