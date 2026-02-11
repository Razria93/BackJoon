#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N, M;
	std::cin >> N >> M;

	std::set<std::string> set;

	for (size_t i = 0; i < N; ++i)
	{
		std::string X;
		std::cin >> X;

		set.insert(X);
	}

	std::vector<std::string> vector;

	for (size_t i = 0; i < M; ++i)
	{
		std::string X;
		std::cin >> X;

		auto it = set.find(X);
		
		if (it != set.end())
		{
			vector.push_back(*it);
		}
	}

	std::sort(vector.begin(), vector.end());

	std::cout << vector.size() << '\n';

	for (std::string factor : vector)
	{
		std::cout << factor << '\n';
	}

	return 0;
}
