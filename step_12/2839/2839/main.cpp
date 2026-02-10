#include <iostream>
#include <climits>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	int min = INT_MAX;
	bool result = false;

	for (int i = 0; i <= (N / 5); ++i)
	{
		int cached = N;
		
		int count_5 = i;
		cached -= 5 * count_5;
		
		int count_3 = cached / 3;
		cached -= 3 * count_3;

		if (cached == 0)
		{
			min = std::min(count_5 + count_3, min);
			result = true;
		}
	}

	if (result)
	{
		std::cout << min;
	}
	else
	{
		std::cout << -1;
	}

	return 0;
}