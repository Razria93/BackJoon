#include <iostream>
#include <climits>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;
	std::cin >> N;

	int min = INT_MAX;
	int max = INT_MIN;
	for (int i = 1; i < N + 1; ++i)
	{
		int X;
		std::cin >> X;

		if (X >= max) { max = X; }
		if (X <= min) { min = X; }
	}

	std::cout << min << " " << max << '\n';

	return 0;
}