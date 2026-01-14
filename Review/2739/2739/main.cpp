#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;

	std::cin >> N;

	for (int i = 1; i <= 9; ++i)
	{
		std::cout << N << " * " << i << " = " << N * i << '\n';
	}

	return 0;
}