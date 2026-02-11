#include <iostream>
#include <unordered_map>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::unordered_map<int, size_t> map;
	map.reserve(N);

	for (size_t i = 0; i < N; ++i)
	{
		int X;
		std::cin >> X;

		auto it = map.find(X);

		if (it != map.end())
		{
			++(it->second);
		}
		else
		{
			map.insert({ X, 1 });
		}
	}

	size_t M;
	std::cin >> M;

	for (size_t i = 0; i < M; ++i)
	{
		int X;
		std::cin >> X;

		auto it = map.find(X);

		if (it != map.end())
		{
			std::cout << it->second;
		}
		else
		{
			std::cout << 0;
		}

		if(i + 1 < M)
		{
			std::cout << ' ';
		}
	}

	std::cout << '\n';

	return 0;
}