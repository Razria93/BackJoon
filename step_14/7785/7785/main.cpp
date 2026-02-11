#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::unordered_set<std::string> set;
	std::vector<std::string> vector;

	for (size_t i = 0; i < N; ++i)
	{
		std::string name;
		std::string log;
		std::cin >> name >> log;

		if (log == "enter")
		{
			set.insert(name);
			vector.push_back(name);
		}
		else // log == leave
		{
			set.erase(name);
		}
	}

	std::sort(vector.begin(), vector.end(), std::greater<std::string>());
	vector.erase(std::unique(vector.begin(), vector.end()), vector.end());

	for (size_t i = 0; i < vector.size(); ++i)
	{
		std::string key = vector[i];

		if (set.find(key) != set.end())
		{
			std::cout << key << '\n';
		}
	}
	return 0;
}