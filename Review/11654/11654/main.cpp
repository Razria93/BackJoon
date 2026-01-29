#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	char C;

	std::cin >> C;
	std::cout << (int)C << std::endl; // ststic_cast<int>, '\n'

	return 0;
}