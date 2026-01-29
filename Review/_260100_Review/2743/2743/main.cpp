#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string S;
	std::cin >> S;

	std::cout << S.size() << '\n';

	return 0;
}