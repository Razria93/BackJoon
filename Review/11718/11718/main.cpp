#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string X;

	while (std::getline(std::cin, X))
	{
		std::cout << X << '\n';
	}

	return 0;
}
