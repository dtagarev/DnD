#include "Player.h"

Player::Player(Race chosenRace)
{
	race = chosenRace;
	if (race == Race::Human)
	{
		maxHealth = health = 50;
		strength = 30;
		maxMana = mana = 20;
	}
	else if (race == Race::Mage)
	{
		maxHealth = health = 50;
		strength = 10;
		maxMana = mana = 40;
	}
	else if (race == Race::Warrior)
	{
		health = 50;
		strength = 40;
		mana = 10;
	}
}

double Player::meleeAttack()
{
	return strength + strength  * (double)weapon / 100;
}

double Player::rangedAttack()
{
	if (mana >= (double)spell)
		mana -= (double)spell;
	else
		return 0;
	return strength + strength  * (double)spell / 100;
}

void Player::takeDmg(double dmg)
{
	dmg -= dmg * (double)armour / 100;
	health -= dmg;
}

