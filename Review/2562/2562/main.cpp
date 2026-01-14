#include <iostream>
#include <climits>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int maxValue = INT_MIN;
	int valueIdx = 0;
	
	int X;
	int num = 1;
	// while (std::cin >> X)
	while (num <= 9)
	{
		std::cin >> X;

		if (X > maxValue)
		{
			maxValue = X;
			valueIdx = num;
		}

		++num;
	}

	std::cout << maxValue << '\n' << valueIdx << '\n';

	return 0;
}