#include <iostream>
#include <vector>
#include <algorithm>

void Print(const std::vector<int>& InVector)
{
	for (int i = 0; i < InVector.size(); ++i)
	{
		std::cout << InVector[i] << '\n';
	}
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	std::vector<int> A;

	for (int i = 0; i < N; ++i)
	{
		int In;
		std::cin >> In;

		A.push_back(In);
	}

	std::sort(A.begin(), A.end());

	Print(A);

	return 0;
}