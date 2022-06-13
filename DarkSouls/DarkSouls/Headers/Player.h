#pragma once
#include "NPC.h" 
#include "AvailableRaces.h"

class Player : NPC
{
	Weapons weapon = Weapons::GreatAxe;
	Spells spell = Spells::FireBall;
	Armour armour = Armour::RustyArmour;

public:
	Player(Race chosenRace);
	double meleeAttack() override;
	double rangedAttack() override;
	void takeDmg(double dmg) override;
	void lvlUp(int upHealth, int upMana, int upStrength) override;

	//const size_t getMaxHealth() const override;
	//const size_t getMaxMana() const override;
	//const double getHealth() const override;
	//const double getMana() const override;
	//const double getStrength() const override;
};
