#include "Game.h"

Game::Game()
{  
	if (weapons.getNumberOfElements() == 0) {
		weapons.add(Weapon("Stick", 2));
		weapons.add(Weapon("Dagger", 3));
		weapons.add(Weapon("Spear", 4));
		weapons.add(Weapon("Axe", 5));
		weapons.add(Weapon("Sword", 6));
		weapons.add(Weapon("Katana", 7));
		weapons.add(Weapon("Great sword", 8));
		weapons.add(Weapon("Curved sword", 9));
		weapons.add(Weapon("Piersing sword", 10));
		weapons.add(Weapon("Great axe", 11));
		weapons.add(Weapon("Hammer", 12));
		weapons.add(Weapon("Whip", 13));
		weapons.add(Weapon("Reaper", 14));
		weapons.add(Weapon("Ultra great sword", 15));
		weapons.add(Weapon("Great hammer", 16));
	}
}
