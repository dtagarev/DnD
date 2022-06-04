#pragma once
#include "NPC.h" 
#include "EnumClasses.h"
class Player : NPC
{
	Race race;
	Weapons weapon = Weapons::GreatAxe;
	Spells spell = Spells::FireBall;
	Armour armour = Armour::RustyArmour;

public:
	Player(Race chosenRace);
	double meleeAttack() override;
	double rangedAttack() override;
	void takeDmg(double dmg) override;
	void lvlUp(int upHealth, int upMana, int upStrength) override;
};
