#include "Spell.h"

Item* Spell::clone() const
{
	Item* newItem = new Spell(*this);
	return newItem;
}

Spell::Spell() : Spell("No name", 0)
{}

Spell::Spell(const char* name, size_t dmg) : Creature(name)
{
	damageScalerInPrc = dmg;
}

const size_t Spell::getDamageScaler() const
{
	return damageScalerInPrc;
}

//setters

//void Spell::setDamageScaler(size_t dmg)
//{
//	damageScalerInPrc = dmg;
//}
//

void Spell::writeSpellToFile(std::ofstream& f)
{
	Item::writeToFile(f);
	f.write((const char*)&damageScalerInPrc, sizeof(damageScalerInPrc));
}

void Spell::readSpellFromFile(std::ifstream& f)
{
	Item::readFromFile(f);
	f.read((char*)&damageScalerInPrc, sizeof(damageScalerInPrc));
}
