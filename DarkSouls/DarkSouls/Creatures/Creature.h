#pragma once
#include "../Items/Weapon.h"
#include "../Items/Spell.h"
#include "../Items/Armour.h"
#include "../Common/MyString.h"

class Creature
{
protected:
	int level;

	size_t maxHealth;
	size_t maxMana;
	double strength;
	double health;
	double mana;

	Weapon weapon;
	Spell spell;
	Armour armour;

public:
	Creature(); //vika li si samo defoltnite na weapon,spell i armour?
	Creature(int level, int strength, int health, int mana, Weapon& weapon, Spell& spell, Armour& armour);
	virtual double meleeAttack() = 0;
	virtual double magicAttack() = 0;
	virtual void takeDmg(double dmg) = 0;
	virtual void lvlUp(size_t upStrength, size_t upHealth, size_t upMana) = 0;
	virtual ~Creature() = default;

	 
	const size_t getMaxHealth() const;
	const size_t getMaxMana() const;
	const double getHealth() const;
	const double getMana() const;
	const double getStrength() const;
};
