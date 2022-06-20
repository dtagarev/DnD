#pragma once
#include "../Items/Weapon.h"
#include "../Items/Spell.h"
#include "../Items/Armour.h"
#include "../Creatures/Player.h"
#include "../Creatures/Monster.h"
#include "../Common/Vector.hpp"
#include "GameLevel.h"

class Game {
private:
	Player player;
	Vector<GameLevel> allLevels;
	//GameLevel testLvl;
	int currentLevel = 1;

	char move();
	char enterChar();
	void printLevel();
	void fight();
	public:
		//static Vector<Weapon> weapons;

		Game();

		void play();
};
