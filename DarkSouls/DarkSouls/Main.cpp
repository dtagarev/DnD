#include <iostream>
#include <fstream>
#include "Common/MyString.h"
#include "Game/GameLevel.h"
#include "Game/Game.h"
//#include "Common/RandomNumberGenerator.h"
int main()
{
	/*GameLevel lvl1(2);
	GameLevel lvl1copy;
	lvl1copy = lvl1;
	lvl1.printMaze();
	lvl1copy.printMaze();*/
	Game newGame;
	newGame.play();
}