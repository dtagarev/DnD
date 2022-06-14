#pragma once
#include "../Items/Weapon.h"
#include "../Items/Spell.h"
#include "../Items/Armour.h"
#include "../Common/MyString.h"

class Creature
{
protected:
	int level;

	double strength;
	double health;
	double mana;

	Weapon weapon;
	Spell spell;
	Armour armour;

public:
	//Creature();
	//Creature(int level, int strength, int health, int mana, Weapon& weapon, Spell& spell, Armour& armour);
	virtual double meleeAttack() = 0;
	virtual double magicAttack() = 0;
	virtual void takeDmg(double dmg) = 0;
	virtual void lvlUp(int incStrength, int incHealth, int incMana) = 0;
	virtual ~Creature() = default;

	//virtual const double getHealth() const = 0;
	//virtual const double getMana() const = 0;
	//virtual const double getStrength() const = 0;

	const double getHealth() const;
	const double getMana() const;
	const double getStrength() const;
};
