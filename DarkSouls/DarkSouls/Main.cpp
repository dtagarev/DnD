#include <iostream>
#include "Pair.hpp"
int main()
{
	Pair<int, int> pairone(1, 2);
	std::cout << pairone.getFirst() << pairone.getSecond();
}