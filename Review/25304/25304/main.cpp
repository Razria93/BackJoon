#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	long long X;
	int N;
	int a, b;

	std::cin >> X;
	std::cin >> N;

	long long sum = 0;

	for (int i = 1; i <= N; ++i)
	{
		std::cin >> a >> b;

		sum += (long long)(a * b);
	}

	std::cout << ("%s", (X == sum) ? "Yes" : "No");

	return 0;
}