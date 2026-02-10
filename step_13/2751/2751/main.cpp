#include <iostream>
#include <vector>
#include <algorithm>


int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	std::vector<int> A;
	A.reserve(N);

	for (int i = 0; i < N; ++i)
	{
		int In;
		std::cin >> In;

		A.push_back(In);
	}
	
	std::sort(A.begin(), A.end());

	for (int a : A)
	{
		std::cout << a << '\n';
	}

	return 0;
}