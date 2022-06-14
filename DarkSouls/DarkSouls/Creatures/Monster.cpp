#include "../Creatures/Monster.h"

Monster::Monster(int lvl) : Creature()
{
	health = 40 + lvl * 10;
	maxHealth = health;
	mana = 15 + lvl * 10;
	maxMana = mana;
	strength = 15 + lvl * 10;
	addedBlockPercentageForlvl *= lvl;
}

double Monster::meleeAttack()
{
	return strength + strength * (double)weapon.getDamageScaler() / 100;
}

double Monster::magicAttack()
{
	return mana + mana * (double)spell.getDamageScaler() / 100;
}

void Monster::takeDmg(double dmg)
{
	dmg -= dmg * (double)(armour.getBlockPercentage() + addedBlockPercentageForlvl) / 100;
	health -= dmg;
}

void Monster::lvlUp(size_t upStrength = 10, size_t upHealth = 10, size_t upMana = 10)
{
	health += upHealth;
	maxHealth = health;
	mana += upMana;
	maxMana = mana;
	strength += upStrength;
	level += 1;
}
