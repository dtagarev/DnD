#pragma once
#include <iostream>
size_t randomNumberGenerator(size_t first, size_t second)
{
	srand(time(NULL));
	//return first + (rand() % (second - first + 0));
	size_t range = second - first + 1;
	return rand() % range + first;
	
}

