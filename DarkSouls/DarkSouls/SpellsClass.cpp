#include "SpellsClass.h"

Spell::Spell()
{
	name = "No name";
	damageScalerInPrc = 0;
	mana = 0;
	neededMaxMana = 0;
}

Spell::Spell(const char* _name, size_t dmg, size_t _mana, size_t _neededMaxMana)
{
	name = _name;
	damageScalerInPrc = dmg;
	mana = _mana;
	neededMaxMana = _neededMaxMana;
}

const MyString& Spell::getName() const
{
	return name;
}

const size_t Spell::getDamageScaler() const
{
	return damageScalerInPrc;
}

const size_t Spell::getMana() const
{
	return mana;
}
const size_t Spell::getNeededMaxMana() const
{
	return neededMaxMana;
}
//setters
//void Spell::setName(const char* name)
//{
//	this->name = name;
//}
//
//void Spell::setDamageScaler(size_t dmg)
//{
//	damageScalerInPrc = dmg;
//}
//
//void Spell::setMana(size_t _mana)
//{
//	mana = _mana
//}

void Spell::writeWeaponToFile(std::ofstream& f)
{
	name.writeStringToFile(f);
	f.write((const char*)&damageScalerInPrc, sizeof(damageScalerInPrc));
	f.write((const char*)&mana, sizeof(mana));
	f.write((const char*)&neededMaxMana, sizeof(neededMaxMana));
}

void Spell::readWeaponFromFile(std::ifstream& f)
{
	name.readStringFromFile(f);
	f.read((char*)damageScalerInPrc, sizeof(damageScalerInPrc));
	f.read((char*)mana, sizeof(mana));
	f.read((char*)neededMaxMana, sizeof(neededMaxMana));
}
