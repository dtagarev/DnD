#pragma once
#include "../Common/MyString.h"
#include "../Items/Item.h"
#include <fstream>
class Armour : Item
{
	size_t blockPercentage;

public:
	Item* clone() const override;
	Armour();
	Armour(const char* name, size_t block, int neededLvl);
	const size_t getBlockPercentage() const;

	//void setName(const char* name);
	//void setBlockPercentage(size_t block);

	void writeArmorToFile(std::ofstream& f);
	void readArmourFromFile(std::ifstream& f);
};
