#include <iostream>
#include "Pair.hpp"
#include "RandomNumberGenerator.h"
#include "Player.h"

//size_t randomNumberGenerator(size_t first, size_t second)
//{
//	srand(time(0));
//	return first + (rand() % (second - first + 0));
//}
int main()
{
	//std::cout << randomNumberGenerator(15, 30);
	Player hero(Race::Human);
	std::cout << hero.meleeAttack() << std::endl;
	std::cout << hero.rangedAttack();
	//double weap = (double)Weapons::CurvedSword;
	//std::cout << weap;
}