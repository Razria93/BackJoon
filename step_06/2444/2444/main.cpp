#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	for (int b = 1; b <= (2 * N - 1); ++b)
	{
		for (int a = 1; a <= (2 * N - 1); ++a)
		{
			int min = 0;
			int max = 0;

			if (b <= N)
			{
				min = N - (b - 1);
				max = N + (b - 1);
			}
			else // b > N
			{
				min = b - N + 1;
				max = (2 * N - 1) - (b - N);
			}

			if (a >= min && a <= max)
			{
				std::cout << '*';
			}
			else if (a < min)
			{
				std::cout << ' ';
			}
		}
		std::cout << '\n';
	}

	return 0;
}