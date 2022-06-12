#include "ArmourClass.h"

Armour::Armour()
{
	name = "No name";
	blockPercentage = 0;
	neededMaxStrength = 0;
}

Armour::Armour(const char* _name, size_t block, size_t neededMaxStrength)
{
	name = _name;
	blockPercentage = block;
	this->neededMaxStrength = neededMaxStrength;
}
//setters
//void Armour::setName(const char* name)
//{
//	this->name = name;
//}
//
//void Armour::setBlockPercentage(size_t block)
//{
//	this->blockPercentage = block;
//}

const MyString& Armour::getName() const
{
	return name;
}

const size_t Armour::getBlockPercentage() const
{
	return blockPercentage;
}

const size_t Armour::getNeededMaxStrenth() const
{
	return neededMaxStrength;
}

void Armour::writeArmorToFile(std::ofstream& f)
{
	name.writeStringToFile(f);
	f.write((const char*)&blockPercentage, sizeof(blockPercentage));
	f.write((const char*)&neededMaxStrength, sizeof(neededMaxStrength));
}

void Armour::readArmourFromFile(std::ifstream& f)
{
	name.readStringFromFile(f);
	f.read((char*)blockPercentage, sizeof(blockPercentage));
	f.read((char*)neededMaxStrength, sizeof(neededMaxStrength));
}

