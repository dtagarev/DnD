#include "GameLevel.h"
#include <math.h>
#include "../Common/RandomNumberGenerator.h"
#pragma warning(disable: 4996)


void GameLevel::findMazeCols(std::ifstream& f)
{
	while (f.get() != '\n')	
			cols++;
	f.seekg(0, std::ios::beg);
	std::cout << "Cols: " << cols << '\n';
}

void GameLevel::findMazeRows(std::ifstream& f)
{
	/*char* buff = new char[cols + 1];
	while (f.getline(buff, cols + 2))
		rows++;
	std::cout << "Rows: " << rows << '\n';
	f.seekg(0, std::ios::;
	~GameLevel();beg);
	delete[] buff;*/

	//f.clear();
	f.seekg(0, std::ios::end);
	int fileLength = f.tellg();
	f.seekg(0, std::ios::beg);
	char* buff = new char[cols + 1];

	//if (f.getline(buff, cols + 2))
	//{
	rows = ceill((double)fileLength / (cols + 2));
	//}
	std::cout << "Rows: " << rows << '\n';
	delete[] buff;
	f.seekg(0, std::ios::beg);
}

void GameLevel::FindMazeDimentions(std::ifstream& f)
{
	findMazeCols(f);
	findMazeRows(f);
}

void GameLevel::initialiseMaze(std::ifstream& f)
{
	level = new char* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		level[i] = new char[cols];
	}

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			f.get(level[i][j]);
		f.get();
	}
	level[0][0] = 'P';
	setTimeNull();
	for (size_t i = 0; i < 3; i++)
	{
		putMonsterOnMap();
	}
}

void GameLevel::switchChars(Pair<int, int> item1, Pair<int, int> item2)
{
	char temp = level[item1.getFirst()][item1.getSecond()];
    level[item1.getFirst()][item1.getSecond()] = level[item2.getFirst()][item2.getSecond()];
	level[item2.getFirst()][item2.getSecond()] = temp;
}

void GameLevel::changeChar(Pair<int, int> item)
{
	level[item.getFirst()][item.getSecond()] = '.';
}

Pair<int,int> GameLevel::coordCorrection(Pair<int, int>& coord)
{
	if (coord.getFirst() < 0)
		coord.setFirst(0);
	else if (coord.getFirst() > rows - 1) // cols ili cols - 1
		coord.setFirst(rows - 1);

	if (coord.getSecond() < 0)
		coord.setSecond(0);
	else if (coord.getSecond() > cols - 1 ) // rows ili rows - 1
		coord.setSecond(cols - 1);
	return coord;
}

char GameLevel::moveUp()
{
	Pair<int, int> newCoords(playerCoords.getFirst() - 1, playerCoords.getSecond());
	coordCorrection(newCoords);
	char newPlaceChar = level[newCoords.getFirst()][newCoords.getSecond()];
	if (level[newCoords.getFirst()][newCoords.getSecond()] == '.')
	{
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'T')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'M')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	return newPlaceChar;
}

void GameLevel::putMonsterOnMap()
{
	Pair<int, int> location(randomNumberGenerator(2, rows - 5), randomNumberGenerator(2, cols - 5));
	if (level[location.getFirst()][location.getSecond()] == '.')
		level[location.getFirst()][location.getSecond()] = 'M';
	else
		putMonsterOnMap();
}

char GameLevel::moveDown()
{
	Pair<int, int> newCoords(playerCoords.getFirst() + 1, playerCoords.getSecond());
	coordCorrection(newCoords);
	char newPlaceChar = level[newCoords.getFirst()][newCoords.getSecond()];
	if (level[newCoords.getFirst()][newCoords.getSecond()] == '.')
	{
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'T')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'M')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	return newPlaceChar;
}

char GameLevel::moveLeft()
{
	Pair<int, int> newCoords(playerCoords.getFirst(), playerCoords.getSecond() - 1);
	coordCorrection(newCoords);
	char newPlaceChar = level[newCoords.getFirst()][newCoords.getSecond()];
	if (level[newCoords.getFirst()][newCoords.getSecond()] == '.')
	{
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'T')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'M')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	return newPlaceChar;
}

char GameLevel::moveRight()
{
	Pair<int, int> newCoords(playerCoords.getFirst(), playerCoords.getSecond() + 1);
	coordCorrection(newCoords);
	char newPlaceChar = level[newCoords.getFirst()][newCoords.getSecond()];
	if (level[newCoords.getFirst()][newCoords.getSecond()] == '.')
	{
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'T')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	else if (level[newCoords.getFirst()][newCoords.getSecond()] == 'M')
	{
		changeChar(newCoords);
		switchChars(playerCoords, newCoords);
		playerCoords = newCoords;
		//return level[newCoords.getFirst()][newCoords.getSecond()];
	}
	return newPlaceChar;
}

void GameLevel::printMaze()
{
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			std::cout << level[i][j];
		//std::cout << level[i];
		std::cout << '\n';
	}
}

GameLevel::GameLevel()
{
	name = "no level";
	rows = 1;
	cols = 1;
	level = new char*[rows];
	for (size_t i = 0; i < rows; i++)
		level[i] = new char[cols];

	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			level[i][j] = 'N';
	}

	playerCoords.setFirst(0);
	playerCoords.setSecond(0);
}

char GameLevel::move(char direction)
{
	if (direction == 'w')
		return moveUp();
	else if (direction == 'a')
		return moveLeft();
	else if (direction == 's')
		return moveDown();
	else if(direction == 'd')
		return moveRight();
}

bool GameLevel::readLevelFromFile(const char* name)
{
	std::ifstream f;
	f.open(name);
	if (!f.is_open())
	{
		std::cout << "Invalid file";
		return false;
	}
	FindMazeDimentions(f);
	initialiseMaze(f);
}

void GameLevel::copyFrom(const GameLevel& other)
{
	//name = other.name;
	rows = other.rows;
	cols = other.cols;
	playerCoords = other.playerCoords;
	
	level = new char* [rows];
	for (size_t i = 0; i < rows; i++)
	{
		level[i] = new char[cols];
	}
	
	for (size_t i = 0; i < rows; i++)
	{
		for (size_t j = 0; j < cols; j++)
			level[i][j] = other.level[i][j];
	}
}


void GameLevel::free()
{
	for (size_t i = 0; i < rows; i++)
		delete level[i];
	delete[] level;
}
GameLevel::GameLevel(int level)
{
	playerCoords.setFirst(0);
	playerCoords.setSecond(0);

	char buffer[max_number_of_levels];
	itoa(level, buffer, 10);
	name = "GameLevels/lvl_";
	name += buffer;
	name += ".txt";
	readLevelFromFile(name.getPointerToChar());
}

GameLevel::GameLevel(const GameLevel& other)
{
	copyFrom(other);
}
GameLevel& GameLevel::operator=(const GameLevel& other)
{
	if (this != &other)
	{
		free();
		copyFrom(other);
	}
	return *this;
}

GameLevel::~GameLevel()
{
	free();
}
