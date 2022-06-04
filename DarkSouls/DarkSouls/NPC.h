#pragma once
class NPC
{
protected:
	int maxHealth = 0;
	int maxMana = 0;
	double health = 0;
	double mana = 0;
	double strength = 0;
public:
	virtual double meleeAttack() = 0;
	virtual double rangedAttack() = 0;
	virtual void takeDmg(double dmg) = 0;
	virtual void lvlUp(int upHealth, int upMana, int upStrength) = 0;
};
