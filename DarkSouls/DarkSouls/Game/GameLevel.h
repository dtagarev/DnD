#pragma once
#include <iostream>
#include <fstream>
#include "../Common/MyString.h"

class GameLevel
{
	MyString name = "GameLevels/lvl_";
	char** level;
public:
	GameLevel(int level);
	bool readLevelFromFile(const char* name);
};
