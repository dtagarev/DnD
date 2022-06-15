#include "GameLevel.h"
#pragma warning(disable: 4996)

GameLevel::GameLevel(int level)
{
	char buffer[100];
	itoa(level, buffer, 10);
	name += buffer;
	name += ".txt";
	std::cout << "Test for file name: ";
	name.print();
	this->level = new char* [1];
	this->level[0] = new char[1];
	this->level[0][0] = '2';
}

bool GameLevel::readLevelFromFile(const char* name)
{
	std::ifstream file;
	file.open(name);
	if (!file.is_open())
	{
		std::cout << "Invalid file";
		return false;
	}
}
