#include <iostream>
#include <unordered_set>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N, M;
	std::cin >> N >> M;

	std::unordered_set<size_t> set;

	for (size_t i = 0; i < N; ++i)
	{
		size_t X;
		std::cin >> X;

		set.insert(X);
	}

	for (size_t i = 0; i < M; ++i)
	{
		size_t X;
		std::cin >> X;

		auto it = set.find(X);
		
		if (it != set.end())
		{
			set.erase(*it);
		}
		else
		{
			set.insert(X);
		}
	}

	std::cout << set.size();

	return 0;
}