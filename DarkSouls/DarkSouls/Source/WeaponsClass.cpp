#include "../Headers/WeaponsClass.h"

Weapon::Weapon()
{
	name = "No name";
	damageScalerInPrc = 0;
	neededMaxStrength = 0;
}

Weapon::Weapon(const char* _name, size_t dmg, size_t neededMaxStrength)
{
	name = _name;
	damageScalerInPrc = dmg;
	this->neededMaxStrength = neededMaxStrength;
}

const MyString& Weapon::getName() const
{
	return name;
}

const size_t Weapon::getDamageScaler() const
{
	return damageScalerInPrc;
}

const size_t Weapon::getNeededMaxStrength() const
{
	return neededMaxStrength;
}

bool Weapon::compareName(const char* other)
{
	return name.compare(other);
}

//setters
//void Weapon::setName(const char* name)
//{
//	this->name = name;
//}
//
//void Weapon::setDamageScaler(size_t dmg)
//{
//	this->damageScalerInPrc = dmg;
//}

void Weapon::writeWeaponToFile(std::ofstream& f)
{
	name.writeStringToFile(f);
	f.write((const char*)&damageScalerInPrc, sizeof(damageScalerInPrc));
	f.write((const char*)&neededMaxStrength, sizeof(neededMaxStrength));
}

void Weapon::readWeaponFromFile(std::ifstream& f)
{
	name.readStringFromFile(f);
	f.read((char*)damageScalerInPrc, sizeof(damageScalerInPrc));
	f.read((char*)neededMaxStrength, sizeof(neededMaxStrength));
	
}
