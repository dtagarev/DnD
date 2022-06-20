#pragma once
#include "Creature.h" 
#include "../Common/Vector.hpp"
#include "../Items/Weapon.h"
#include "../Items/Armour.h"
#include "../Items/Spell.h"
enum Race {
	Human,
	Wizard,
	Warrior,
};

class Player : Creature
{
	Race race;
	void determineRace(int number)
	{
		if (number == 1)
			race = Race::Human;
		else if (number == 2)
			race = Race::Warrior;
		else if (number == 3)
			race = Race::Wizard;

		if (race == Race::Human)
		{
			health = 50;
			maxHealth = 50;
			strength = 30;
			mana = 20;
		}
		else if (race == Race::Wizard)
		{
			health = 50;
			maxHealth = 50;
			strength = 10;
			mana = 40;
		}
		else if (race == Race::Warrior)
		{
			health = 50;
			maxHealth = 50;
			strength = 40;
			mana = 10;
		}
	}

public:
	Player();
	Player(int number); // da dobavq itemite
	double meleeAttack() override;
	double magicAttack() override;
	void takeDmg(double dmg) override;
	void lvlUp(size_t upHealth, size_t upMana, size_t upStrength) override;
	
	void heal(size_t plusHealth);
};
