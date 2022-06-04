#pragma once
#include <iostream>
size_t randomNumberGenerator(size_t first, size_t second)
{
	srand(time(0));
	return first + (rand() % (second - first + 0));
}