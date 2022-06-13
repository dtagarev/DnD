#include "../Headers/NPC.h"

void NPC::determineRace(Race chosenRace)
{
	if (chosenRace == Race::Human)
	{
		health = 50;
		maxHealth = 50;
		strength = 30;
		mana = 20;
		maxMana = 20;
		race = "Human";
	}
	else if (chosenRace == Race::Mage)
	{
		maxHealth = 50;
		health = 50;
		strength = 10;
		maxMana = 40;
		mana = 40;
		race = "Mage";
	}
	else if (chosenRace == Race::Warrior)
	{
		maxHealth = 50;
		health = 50;
		strength = 40;
		maxMana = 10;
		mana = 10;
		race = "Warrior";
	}
	else if (chosenRace == Race::Monster)
	{
		health = 50;
		maxHealth = 50;
		strength = 25;
		mana = 25;
		maxMana = 25;
		race = "Monster";
	}
}

const size_t NPC::getMaxHealth() const
{
	return maxHealth;
}

const size_t NPC::getMaxMana() const
{
	return maxMana;
}

const double NPC::getHealth() const
{
	return health;
}

const double NPC::getMana() const
{
	return mana;
}

const double NPC::getStrength() const
{
	return strength;
}
