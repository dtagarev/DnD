#pragma once
#include "myString.h"
#include <fstream>
class Armour
{
	MyString name;
	size_t blockPercentage;
	size_t neededMaxStrength;
public:
	Armour();
	Armour(const char* name, size_t block, size_t neededMaxStrength);
	const MyString& getName() const;
	const size_t getBlockPercentage() const;
	const size_t getNeededMaxStrenth() const;
	bool compareName(const char* other);

	//void setName(const char* name);
	//void setBlockPercentage(size_t block);

	void writeArmorToFile(std::ofstream& f);
	void readArmourFromFile(std::ifstream& f);
};
