#include "../Headers/IngameWeapons.h"

void IngameWeapons::addDefaultWeapons()
{
	addWeapon("Stick", 2, 0);
	addWeapon("Dagger", 3, 10);
	addWeapon("Spear", 4, 15);
	addWeapon("Axe", 5, 20);
	addWeapon("Sword", 6, 30);
	addWeapon("Katana", 7, 35);
	addWeapon("Great sword", 8, 40);
	addWeapon("Curved sword", 9, 45);
	addWeapon("Piersing sword", 10, 50);
	addWeapon("Great axe", 11, 55);
	addWeapon("Hammer", 12, 60);
	addWeapon("Whip", 13, 65);
	addWeapon("Reaper", 14, 70);
	addWeapon("Ultra great sword", 15, 70);
	addWeapon("Great hammer", 16, 70);
}

IngameWeapons::IngameWeapons()
{
	//Weapon stick("Stick", 2, 0);
	//allWeapons.add(stick);
	//Weapon dagger("Dagger", 3, 10);
	//allWeapons.add(dagger);
	//Weapon spear("Spear", 4, 15);
	//allWeapons.add(spear);
	//Weapon axe("Axe", 5, 20);
	//allWeapons.add(axe);
	//Weapon sword("Sword", 6, 30);
	//allWeapons.add(sword);
	//Weapon katana("Katana", 7, 35);
	//allWeapons.add(katana);
	//Weapon greatSword("Great sword", 8, 40);
	//allWeapons.add(greatSword);
	//Weapon curvedSword("Curved sword", 9, 45);
	//allWeapons.add(curvedSword);
	//Weapon piercingSword("Piersing sword", 10, 50);
	//allWeapons.add(piercingSword);
	//Weapon greatAxe("Great axe", 11, 55);
	//allWeapons.add(greatAxe);
	//Weapon hammer("Hammer", 12, 60);
	//allWeapons.add(hammer);
	//Weapon whip("Whip", 13, 65);
	//allWeapons.add(whip);
	//Weapon reaper("Reaper", 14, 70);
	//allWeapons.add(reaper);
	//Weapon ultraGreatSword("Ultra great sword", 15, 70);
	//allWeapons.add(ultraGreatSword);
	//Weapon greatHammer("Great hammer", 16, 70);
	//allWeapons.add(greatHammer);
	addDefaultWeapons();
}

Weapon& IngameWeapons::chooseWeapon(const char* otherName)
{
	size_t length = allWeapons.getNumberOfElements();
	for (size_t i = 0; i < length; i++)
	{
		if (allWeapons[i].compareName(otherName))
		{
			return allWeapons[i];
		}
	}
}

void IngameWeapons::addWeapon(const char* name, size_t damageScalerInPrc, size_t neededMaxStrength)
{
	Weapon customWeapon(name, damageScalerInPrc, neededMaxStrength);
	allWeapons.add(customWeapon);
}

void IngameWeapons::writeIngameWeaponsToFile(std::ofstream f)
{
	size_t weaponCount = allWeapons.getNumberOfElements();
	f.write((const char*)weaponCount, sizeof(weaponCount));
	for (size_t i = 0; i < weaponCount; i++)
		allWeapons[i].writeWeaponToFile(f);
}

void IngameWeapons::readIngameWeaponsFromFile(std::ifstream f)
{
	size_t weaponCount = 0;
	f.read((char*)weaponCount, sizeof(weaponCount));
	for (size_t i = 0; i < weaponCount; i++)
	{
		allWeapons[i].readWeaponFromFile(f);
	}
}

