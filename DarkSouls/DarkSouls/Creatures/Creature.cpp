#include "Creature.h"


const size_t Creature::getMaxHealth() const
{
	return maxHealth;
}

const size_t Creature::getMaxMana() const
{
	return maxMana;
}

const double Creature::getHealth() const
{
	return health;
}

const double Creature::getMana() const
{
	return mana;
}

const double Creature::getStrength() const
{
	return strength;
}

Creature::Creature()
{
	level = 1;
	strength = 0;
	health = 0;
	mana = 0;
	maxHealth = 0;
	maxMana = 0;
}

Creature::Creature(int level, int strength, int health, int mana, Weapon& weapon, Spell& spell, Armour& armour)
{
	this->level = level;
	this->strength = strength;
	this->health = health;
	this->mana = mana;
	this->weapon = weapon;
	this->spell = spell;
	this->armour = armour;
	maxHealth = health;
	maxMana = mana;
}
