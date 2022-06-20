#include "Game.h"

char Game::enterChar()
{
	char ch;
	std::cin >> ch;
	return ch;
}

void Game::printLevel()
{
	system("cls");
	allLevels[currentLevel].printMaze();
}

void Game::fight()
{
	system("cls");
	std::cout << "A fight has begun" << '\n';
	std::cout << '\n';
	std::cout << '\n';
	std::cout << "Enter something to continue:" << '\n';
	enterChar();
}

char Game::move()
{
	char command;
	command = enterChar();
	if (command == 'q')
		return command;
	return allLevels[currentLevel].move(command);
}

Game::Game() 
{  
	//if (weapons.getNumberOfElements() == 0) {
	//	/*weapons.add(Weapon("Stick", 2));
	//	weapons.add(Weapon("Axe", 5));
	//	weapons.add(Weapon("Sword", 6));
	//	weapons.add(Weapon("Hammer", 12));
	//}

	//	weapons.add(Weapon("Dagger", 3));
	//	weapons.add(Weapon("Spear", 4));
	//	weapons.add(Weapon("Whip", 13));
	//	weapons.add(Weapon("Reaper", 14));
	//	weapons.add(Weapon("Ultra great sword", 15));
	//	weapons.add(Weapon("Great hammer", 16));*/
	//	weapons.add(Weapon("Katana", 7));
	//	weapons.add(Weapon("Great sword", 8));
	//	weapons.add(Weapon("Curved sword", 9));
	//	weapons.add(Weapon("Piersing sword", 10));
	//	weapons.add(Weapon("Great axe", 11));

	//allLevels.add(GameLevel(1));
	//allLevels.add(GameLevel(2));
	//allLevels.add(GameLevel(3));
	//allLevels.add(GameLevel(4));
	//allLevels.add(GameLevel(5));
	allLevels[0] = GameLevel(1);
	allLevels[1] = GameLevel(2);
	allLevels[2] = GameLevel(3);
	allLevels[3] = GameLevel(4);
	allLevels.add(GameLevel(5));

}

void Game::play()
{
	printLevel();
	char newPositionChar;
	bool quitGame = false;
	do
	{
		newPositionChar = move();
		if (newPositionChar == '.' || newPositionChar == 'P')
			printLevel();
		else if (newPositionChar == 'M')
		{
			fight();
			printLevel();
		}
	} while (newPositionChar != 'q' && !quitGame);
}
