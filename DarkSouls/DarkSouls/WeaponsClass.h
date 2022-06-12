#pragma once
#include "myString.h"
#include <fstream>
class Weapon
{
	MyString name;
	size_t damageScalerInPrc = 0;
	size_t neededMaxStrength = 0;
public:
	Weapon();
	Weapon(const char*, size_t, size_t neededMaxStrength);
	const MyString& getName() const;
	const size_t getDamageScaler() const;
	const size_t getNeededMaxStrength() const;

	//void setName(const char* name);
	//void setDamageScaler(size_t dmg);

	void writeWeaponToFile(std::ofstream& f);
	void readWeaponFromFile(std::ifstream& f);
};
