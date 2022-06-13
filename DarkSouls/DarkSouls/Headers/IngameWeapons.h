#pragma once
#include <iostream>
#include "myString.h"
#include "../Templates/Vector.hpp"
#include "WeaponsClass.h"
#include <fstream>
class IngameWeapons
{
	Vector<Weapon> allWeapons;
	void addDefaultWeapons();
public:
	IngameWeapons();
	Weapon& chooseWeapon(const char*);
	void addWeapon(const char* name, size_t damageScalerInPrc, size_t neededMaxStrength);
	void writeIngameWeaponsToFile(std::ofstream f);
	void readIngameWeaponsFromFile(std::ifstream f);
};
