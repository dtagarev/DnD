#pragma once
#include "Creature.h" 
#include "../Common/Vector.hpp"

enum Race {
	Human,
	Wizard,
	Warrior,
};

Vector<double>& determineRace(Race chosenRace)
{	
	double health = 0;
	double strength = 0;
	double mana = 0;
	if (chosenRace == Race::Human)
	{
		health = 50;
		strength = 30;
		mana = 20;
	}
	else if (chosenRace == Race::Wizard)
	{
		health = 50;
		strength = 10;
		mana = 40;
	}
	else if (chosenRace == Race::Warrior)
	{
		health = 50;
		strength = 40;
		mana = 10;
	}
	
	Vector<double> stats;
	stats.add(health);
	stats.add(strength);
	stats.add(mana);
	return stats;
	/*else if (chosenRace == Race::Monster)
	{
		health = 50;
		strength = 25;
		mana = 25;
	}*/
}
class Player : Creature
{
	Race race;

public:
	Player(Race race);
	double meleeAttack() override;
	double magicAttack() override;
	void takeDmg(double dmg) override;
	void lvlUp(int upHealth, int upMana, int upStrength) override;

	//const size_t getMaxHealth() const override;
	//const size_t getMaxMana() const override;
	//const double getHealth() const override;
	//const double getMana() const override;
	//const double getStrength() const override;
};
