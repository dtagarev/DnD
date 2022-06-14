#pragma once
#include<iostream>
#include "Creature.h" 
#include "../Common/Vector.hpp"
#include "../Items/Weapon.h"
#include "../Items/Armour.h"
#include "../Items/Spell.h"

class Monster : Creature
{
	size_t addedBlockPercentageForlvl = 5;
public:
	Monster(int lvl); // add items armour -5% !!!

	double meleeAttack() override;
	double magicAttack() override;
	void takeDmg(double dmg) override;
	void lvlUp(size_t upStrength, size_t upHealth, size_t upMana) override;
};
