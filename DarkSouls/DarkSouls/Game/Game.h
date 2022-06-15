#pragma once
#include "../Items/Weapon.h"
#include "../Items/Spell.h"
#include "../Items/Armour.h"
#include "../Creatures/Player.h"
#include "../Creatures/Monster.h"
#include "../Common/Vector.hpp"

class Game {
private:
public:
	//static Vector<Weapon> weapons;

	Game();

	void play();
};
