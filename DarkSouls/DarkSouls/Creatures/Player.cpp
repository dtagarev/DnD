#include "Player.h"

Player::Player(Race race)
{
	this->race = race;
	Vector<double> stats = determineRace(race);
	health = stats[0];
	strength = stats[1];
	mana = stats[2];
}

double Player::meleeAttack()
{
	return strength + strength * (double)weapon.getDamageScaler() / 100;
}

double Player::magicAttack()
{
	return mana + mana * (double)spell.getDamageScaler() / 100;
}

void Player::takeDmg(double dmg)
{
	dmg -= dmg * (double)armour.getBlockPercentage() / 100;
	health -= dmg;
}

void Player::lvlUp(int incStrength, int incHealth, int incMana)
{}

//const size_t Player::getMaxHealth() const
//{
//	return maxHealth;
//}
//
//const size_t Player::getMaxMana() const
//{
//	return maxMana;
//}
//
//const double Player::getHealth() const
//{
//	return health;
//}
//
//const double Player::getMana() const
//{
//	return mana;
//}
//
//const double Player::getStrength() const
//{
//	return strength;
//}

