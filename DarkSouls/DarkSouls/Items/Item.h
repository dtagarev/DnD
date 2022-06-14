#pragma once
#include "../Common/MyString.h"
#include <fstream>

class Item
{
	MyString name;

public:
	Item();
	Item(const char* name);
	virtual Item* clone() const = 0;
	Item* returnItem(const char*) const;
	virtual ~Item() = default;

	std::ofstream& writeToFile(std::ofstream& f);
	std::ifstream& readFromFile(std::ifstream& f);
};
