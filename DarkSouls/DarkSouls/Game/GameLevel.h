#pragma once
#include <iostream>
#include <fstream>
#include "../Common/MyString.h"
#include "../Common/Vector.hpp"
#include "../Common/Pair.hpp"

const int max_number_of_levels = 10;

class GameLevel
{
	Pair<int, int> playerCoords;
	MyString name = "GameLevels/lvl_";
	char** level;
	int rows = 0;
	int cols = 0;
	bool readLevelFromFile(const char* name);
	void findMazeCols(std::ifstream& f);
	void findMazeRows(std::ifstream& f);
	void FindMazeDimentions(std::ifstream& f);
	void initialiseMaze(std::ifstream& f);
	void switchChars(Pair<int, int> item1, Pair<int, int> item2);
	void changeChar(Pair<int, int> item);
	Pair<int, int> coordCorrection(Pair<int,int>& coord);
	void putMonsterOnMap();
	char moveUp();
	char moveDown();
	char moveLeft();
	char moveRight();

	void copyFrom(const GameLevel& other);
	void free();
public:
	GameLevel();
	GameLevel(int level);
	GameLevel(const GameLevel& other);
	GameLevel& operator=(const GameLevel& other);
	~GameLevel();
	void printMaze();
	char move(char direction);
};
