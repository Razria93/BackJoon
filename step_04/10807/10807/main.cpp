#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;
	int arr[100];

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	int v;
	int count = 0;

	std::cin >> v;

	for (int j = 0; j < n; j++)
	{
		if (arr[j] == v)
			++count;
	}

	std::cout << count << std::endl;

	return 0;
}