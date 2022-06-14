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

