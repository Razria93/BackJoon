#include <iostream>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	int A[10001] = { 0 };

	for (int i = 0; i < N; ++i)
	{
		int X;
		std::cin >> X;

		++A[X];
	}

	for (int j = 0; j < 10001; ++j)
	{
		if (A[j] != 0)
		{
			int count = 0;
			while (count < A[j])
			{
				std::cout << j << '\n';
				++count;
			}
		}
	}

	return 0;
}
