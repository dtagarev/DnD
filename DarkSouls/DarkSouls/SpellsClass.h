#pragma once
#include <iostream>
#include <fstream>
#include "myString.h"

class Spell
{
	MyString name;
	size_t damageScalerInPrc;
	size_t mana;
	size_t neededMaxMana;
public:
	Spell();
	Spell(const char* _name, size_t dmg, size_t _mana, size_t _neededMaxMana);
	const MyString& getName() const;
	const size_t getDamageScaler() const;
	const size_t getMana() const;
	const size_t getNeededMaxMana() const;
	
	//void setName(const char* name);
	//void setDamageScaler(size_t dmg);
	//void setMana(size_t _mana);

	void writeWeaponToFile(std::ofstream& f);
	void readWeaponFromFile(std::ifstream& f);
};
