#pragma once
#include "EnumClasses.h"
#include "myString.h"
class NPC
{
protected:
	MyString race;
	int maxHealth = 0;
	int maxMana = 0;
	double health = 0;
	double mana = 0;
	double strength = 0;
public:
	void determineRace(Race chosenRace)
	{
		if (chosenRace == Race::Human)
		{
			health = maxHealth = 50;
			strength = 30;
			mana = maxMana = 20;
			race = "Human";
		}
		else if (chosenRace == Race::Mage)
		{
			maxHealth = health = 50;
			strength = 10;
			maxMana = mana = 40;
			race = "Mage";
		}
		else if (chosenRace == Race::Warrior)
		{
			health = 50;
			strength = 40;
			mana = 10;
			race = "Warrior";
		}
		else if (chosenRace == Race::Monster)
		{
			health = maxHealth = 50;
			strength = 25;
			mana = maxMana = 25;
			race = "Monster";
		}
	}
	virtual double meleeAttack() = 0;
	virtual double rangedAttack() = 0;
	virtual void takeDmg(double dmg) = 0;
	virtual void lvlUp(int upHealth, int upMana, int upStrength) = 0;
	virtual ~NPC() = default;
};
