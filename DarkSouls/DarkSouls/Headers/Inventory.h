#pragma once
#include <iostream>
#include <fstream>
#include "WeaponsClass.h"
#include "ArmourClass.h"
#include "SpellsClass.h"
#include "IngameWeapons.h"

class Inventory {
	Weapon weapon;
	Armour armour;
	Spell spell;
public:
	Inventory();
	void writeInventoryToFile(std::ofstream& f);
	void ReadInventoryFromfile(std::ifstream& f);

};
