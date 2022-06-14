#include "Armour.h"

Item* Armour::clone() const
{
	Item* newItem = new Armour(*this);
	return newItem;
}

Armour::Armour() : Armour("No name", 0)
{}

Armour::Armour(const char* name, size_t block) : Item(name)
{
	blockPercentage = block;
}

//setters
//
//void Armour::setBlockPercentage(size_t block)
//{
//	this->blockPercentage = block;
//}


const size_t Armour::getBlockPercentage() const
{
	return blockPercentage;
}

void Armour::writeArmorToFile(std::ofstream& f)
{
	Item::writeToFile(f);
	f.write((const char*)&blockPercentage, sizeof(blockPercentage));
}

void Armour::readArmourFromFile(std::ifstream& f)
{
	Item::readFromFile(f);
	f.read((char*)&blockPercentage, sizeof(blockPercentage));
}

