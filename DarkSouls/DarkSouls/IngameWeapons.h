#pragma once
#include <iostream>
#include "myString.h"
#include "Vector.hpp"
#include "WeaponsClass.h"
class IngameWeapons
{
	Vector<Weapon> allWeapons;
public:
	IngameWeapons();
	void addWeapon(const char* name, size_t damageScalerInPrc, size_t neededMaxStrength);
};
