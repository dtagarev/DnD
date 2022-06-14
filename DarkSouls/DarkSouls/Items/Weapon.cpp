#include "Weapon.h"

Item* Weapon::clone() const
{
	Item* newItem = new Weapon(*this);
	return newItem;
}

Weapon::Weapon() : Weapon("No name", 0, 0)
{}

Weapon::Weapon(const char* name, size_t dmg, int neededLvl) : Item(name, neededLvl)
{
	damageScalerInPrc = dmg;
}

const size_t Weapon::getDamageScaler() const
{
	return damageScalerInPrc;
}

//setters
//
//void Weapon::setDamageScaler(size_t dmg)
//{
//	this->damageScalerInPrc = dmg;
//}

void Weapon::writeWeaponToFile(std::ofstream& f)
{
	Item::writeToFile(f);
	f.write((const char*)&damageScalerInPrc, sizeof(damageScalerInPrc));
}

void Weapon::readWeaponFromFile(std::ifstream& f)
{
	Item::readFromFile(f);
	f.read((char*)&damageScalerInPrc, sizeof(damageScalerInPrc));
}
