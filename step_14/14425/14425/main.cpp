#include <iostream>
#include <unordered_set>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N,M;
	std::cin >> N >> M;

	std::unordered_set<std::string> set;
	set.reserve(N);

	for (size_t i = 0; i < N; ++i)
	{
		std::string X;
		std::cin >> X;

		set.insert(X);
	}

	size_t count = 0;
	for (size_t i = 0; i < M; ++i)
	{
		std::string X;
		std::cin >> X;

		auto it = set.find(X);
		
		if (it != set.end())
		{
			++count;
		}
	}

	std::cout << count;

	return 0;
}