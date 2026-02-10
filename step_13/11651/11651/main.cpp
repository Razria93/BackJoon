#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::vector<std::pair<int, int>> A;
	A.reserve(N);

	for (size_t i = 0; i < N; ++i)
	{
		std::pair<int, int> X;
		std::cin >> X.first >> X.second;

		A.push_back(X);
	}

	std::sort(A.begin(), A.end(),
		[](const auto& lhs, const auto& rhs)
		{
			if (lhs.second != rhs.second)
			{
				return lhs.second < rhs.second;
			}

			return lhs.first < rhs.first;
		});

	for (const std::pair<int, int>& a : A)
	{
		std::cout << a.first << ' ' << a.second << '\n';
	}

	return 0;
}