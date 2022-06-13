#pragma once
#include "../Headers/AvailableRaces.h"
#include "myString.h"
class NPC
{
protected:
	MyString race;
	size_t maxHealth = 0;
	size_t maxMana = 0;
	double health = 0;
	double mana = 0;
	double strength = 0;
public:
	void determineRace(Race chosenRace);
	virtual double meleeAttack() = 0;
	virtual double rangedAttack() = 0;
	virtual void takeDmg(double dmg) = 0;
	virtual void lvlUp(int upHealth, int upMana, int upStrength) = 0;
	virtual ~NPC() = default;

	//virtual const size_t getMaxHealth() const = 0;
	//virtual const size_t getMaxMana() const = 0;
	//virtual const double getHealth() const = 0;
	//virtual const double getMana() const = 0;
	//virtual const double getStrength() const = 0;

	const size_t getMaxHealth() const;
	const size_t getMaxMana() const;
	const double getHealth() const;
	const double getMana() const;
	const double getStrength() const;
};
