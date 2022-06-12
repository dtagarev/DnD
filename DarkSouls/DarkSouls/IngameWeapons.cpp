#include "IngameWeapons.h"

IngameWeapons::IngameWeapons()
{
	Weapon stick("Stick", 2, 0);
	allWeapons.add(stick);
	Weapon dagger("Dagger", 3, 10);
	allWeapons.add(dagger);
	Weapon spear("Spear", 4, 15);
	allWeapons.add(spear);
	Weapon axe("Axe", 5, 20);
	allWeapons.add(axe);
	Weapon sword("Sword", 6, 30);
	allWeapons.add(sword);
	Weapon katana("Katana", 7, 35);
	allWeapons.add(katana);
	Weapon greatSword("Great sword", 8, 40);
	allWeapons.add(greatSword);
	Weapon curvedSword("Curved sword", 9, 45);
	allWeapons.add(curvedSword);
	Weapon piercingSword("Piersing sword", 10, 50);
	allWeapons.add(piercingSword);
	Weapon greatAxe("Great axe", 11, 55);
	allWeapons.add(greatAxe);
	Weapon hammer("Hammer", 12, 60);
	allWeapons.add(hammer);
	Weapon whip("Whip", 13, 65);
	allWeapons.add(whip);
	Weapon reaper("Reaper", 14, 70);
	allWeapons.add(reaper);
	Weapon ultraGreatSword("Ultra great sword", 15, 70);
	allWeapons.add(ultraGreatSword);
	Weapon greatHammer("Great hammer", 16, 70);
	allWeapons.add(greatHammer);
}

void IngameWeapons::addWeapon(const char* name, size_t damageScalerInPrc, size_t neededMaxStrength)
{
	Weapon customWeapon(name, damageScalerInPrc, neededMaxStrength);
	allWeapons.add(customWeapon);
}
