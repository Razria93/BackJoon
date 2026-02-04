#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	int Prime = 2;
	while (true)
	{
		if (N == 1) break;

		if ((N % Prime) == 0)
		{
			N /= Prime;
			std::cout << Prime << '\n';
		}
		else
		{
			++Prime;
		}
	}

	return 0;
}