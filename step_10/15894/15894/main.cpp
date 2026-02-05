#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	size_t result = 3 * N + N;

	std::cout << result;

	return 0;
}