#include <iostream>

static int getinfos()
{
	int carrots = 0;

	std::cout << "How many carrots do you have" << std::endl;

	std::cin >> carrots;

	carrots = carrots + 2;

	std::cout << "now you have " << carrots << " carrots" << std::endl;

	return 0;
}