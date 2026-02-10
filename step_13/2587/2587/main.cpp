#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::vector<size_t> A;
	A.reserve(5);

	size_t Sum = 0;

	for (int i = 0; i < 5; ++i)
	{
		size_t In;
		std::cin >> In;

		A.push_back(In);
		Sum += In;
	}

	std::sort(A.begin(), A.end());

	std::cout << Sum / 5 << '\n';
	std::cout << A[2];

	return 0;
}