#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string S;
	std::cin >> S;

	std::vector<int> A;
	A.reserve(S.size());

	for (int i = 0; i < S.size(); ++i)
	{
		int input = static_cast<int>(S[i] - '0');

		A.push_back(input);
	}

	std::sort(A.begin(), A.end(), std::greater<int>());

	for (int i = 0; i < A.size(); ++i)
	{
		std::cout << A[i];
	}

	return 0;
}