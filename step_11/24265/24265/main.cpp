#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::cout << (N * (N - 1)) / 2 << '\n' << 2;

	return 0;
}
