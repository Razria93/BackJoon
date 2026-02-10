#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::vector<std::pair<int, std::string>> A;
	A.reserve(N);

	for (size_t i = 0; i < N; ++i)
	{
		std::pair<int, std::string> X;
		std::cin >> X.first >> X.second;

		A.push_back(X);
	}

	std::stable_sort(A.begin(), A.end(),
		[](const auto& lhs, const auto& rhs)
		{
			return lhs.first < rhs.first;
		});

	for (size_t i = 0; i < A.size(); ++i)
	{
		std::cout << A[i].first << ' ' << A[i].second << '\n';
	}

	return 0;
}