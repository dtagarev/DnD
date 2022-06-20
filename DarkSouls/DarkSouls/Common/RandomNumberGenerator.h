#pragma once
#include <iostream>
void setTimeNull()
{
	srand(time(NULL));
}
int randomNumberGenerator(int first, int second)
{
	return first + (rand() % (second - first + 1));
	//int range = second - first + 1;
	//return rand() % range + first;
	
}

