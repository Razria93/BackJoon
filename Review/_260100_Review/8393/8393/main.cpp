#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;

	std::cin >> N;

	int sum = 0;

	for (int i = 1; i <= N; ++i)
	{
		sum += i;
	}

	std::cout << sum << '\n';

	return 0;
}