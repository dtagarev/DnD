#include "Player.h"

Player::Player(Race chosenRace) : NPC()
{
	determineRace(chosenRace);
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

void Player::lvlUp(int upHealth, int upMana, int upStrength)
{
}

