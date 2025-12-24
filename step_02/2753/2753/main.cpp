#include <iostream>

int main()
{
	unsigned int a;

	std::cin >> a;

	if ((a % 4) == 0)
	{
		if ((a % 100 != 0) || (a % 400 == 0))
			std::cout << 1 << std::endl;
		else
			std::cout << 0 << std::endl;
	}
	else
		std::cout << 0 << std::endl;

	return 0;
}