#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	size_t K;

	std::cin >> N >> K;

	std::vector<size_t> A;
	A.reserve(N);

	for (size_t i = 0; i < N; ++i)
	{
		size_t In;
		std::cin >> In;

		A.push_back(In);
	}

	std::sort(A.begin(), A.end());
	std::reverse(A.begin(), A.end());

	std::cout << A[K - 1];

	return 0;
}