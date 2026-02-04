#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t T;
	std::cin >> T;

	for (int i = 0; i < T; ++i)
	{
		size_t C;
		std::cin >> C;

		size_t Q = C / 25;
		C %= 25;

		size_t D = C / 10;
		C %= 10;

		size_t N = C / 5;
		C %= 5;

		size_t P = C;

		std::cout << Q << ' ' << D << ' ' << N << ' ' << P << '\n';
	}

	return 0;
}