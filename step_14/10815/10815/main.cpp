#include <iostream>
#include <unordered_set>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::unordered_set<int> set;

	for (size_t i = 0; i < N; ++i)
	{
		int X;
		std::cin >> X;

		set.insert(X);
	}

	size_t M;
	std::cin >> M;

	for (size_t i = 0; i < M; ++i)
	{
		int X;
		std::cin >> X;

		auto it = set.find(X);

		if (it != set.end())
		{
			std::cout << 1 << ' ';
		}
		else
		{
			std::cout << 0 << ' ';
		}
	}

	return 0;
}