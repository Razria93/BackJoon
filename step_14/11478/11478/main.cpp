#include <iostream>
#include <string>
#include <unordered_set>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string s;
	std::cin >> s;

	std::unordered_set<std::string> set;

	for (size_t i = 0; i < s.size(); ++i)
	{
		for (size_t j = 1; j <= s.size() - i; ++j)
		{
			set.insert(s.substr(i, j));
		}
	}

	std::cout << set.size();

	return 0;
}