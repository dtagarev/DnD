#pragma once
#include "../Common/MyString.h"
#include <fstream>

class Item
{
	int neededLvl;
	MyString name;

public:
	Item();
	Item(const char* name, int neededLvl);
	virtual Item* clone() const = 0;
	//Item* returnItem() const;
	const MyString& getName() const;
	bool compareName(const char*);
	virtual ~Item() = default;

	std::ofstream& writeToFile(std::ofstream& f);
	std::ifstream& readFromFile(std::ifstream& f);
};
