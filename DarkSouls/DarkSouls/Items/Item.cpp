#include "Item.h"

Item::Item() : name("No name"), neededLvl(0)
{
}

Item::Item(const char* name, int neededLvl) : name(name), neededLvl(neededLvl)
{
}

const MyString& Item::getName() const
{
	return name;
}

bool Item::compareName(const char* other)
{
	return name.compare(other);
}

std::ofstream& Item::writeToFile(std::ofstream& f)
{
	f.write((const char*)&neededLvl, sizeof(neededLvl));
	name.writeStringToFile(f);
	return f;
}

std::ifstream& Item::readFromFile(std::ifstream& f)
{
	f.read((char*)&neededLvl, sizeof(neededLvl));
	name.readStringFromFile(f);
	return f;
}

