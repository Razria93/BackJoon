#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	bool array[100][100] = { false };

	size_t num;
	std::cin >> num;

	size_t count = 0;

	while (count < num)
	{
		size_t X, Y;
		std::cin >> X >> Y;

		for (size_t j = 0; j < 10; ++j)
		{
			for (size_t i = 0; i < 10; ++i)
			{
				array[X + i][Y + j] = true;
			}
		}
		
		++count;
	}

	size_t result = 0;

	for (size_t j = 0; j < 100; ++j)
	{
		for (size_t i = 0; i < 100; ++i)
		{
			if (array[i][j] == true)
			{
				++result;
			}
		}
	}

	std::cout << result;

	return 0;
}