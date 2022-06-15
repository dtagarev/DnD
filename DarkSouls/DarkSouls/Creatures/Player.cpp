#include "Player.h"

Player::Player(Race race) : Creature()
{
	this->race = race;
	determineRace(race);
	weapon = Weapon("stick", 20, 0);
	spell = Spell("Fire ball", 20, 0);
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

void Player::lvlUp(size_t upStrength, size_t upHealth, size_t upMana)
{
	maxHealth += upHealth;
	strength += upStrength;
	level += 1;
}

void Player::heal(size_t plusHealth)
{
	health += plusHealth;
	if (health > maxHealth)
		health = maxHealth;
}
