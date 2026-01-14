#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N;
	std::cin >> N;

	int* arr = new int[N + 1];

	int Num = 0;
	for (int i = 1; i <= N; ++i)
	{
		std::cin >> arr[i];
	}

	int V;
	std::cin >> V;

	for (int j = 1; j <= N; ++j)
	{
		if (arr[j] == V) ++Num;
	}

	std::cout << Num << '\n';

	delete[] arr;

	return 0;
}