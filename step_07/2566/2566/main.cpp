#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t target = 0;
	size_t max = 0;
	size_t row = 0;
	size_t column = 0;

	for (size_t i = 1; i <= 9; ++i)
	{
		for (size_t j = 1; j <= 9; ++j)
		{
			std::cin >> target;
			if (target >= max)
			{
				max = target;
				row = i;
				column = j;
			}
		}
	}

	std::cout << max << '\n' << row << ' ' << column;

	return 0;
}