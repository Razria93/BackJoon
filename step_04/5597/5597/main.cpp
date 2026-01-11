#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a[30];

	for (int k = 0; k < 30; k++)
	{
		a[k] = 0;
	}

	for (int i = 0; i < 28; i++)
	{
		int temp;
		std::cin >> temp;

		int arr_num = temp - 1;

		a[arr_num] = 1;
	}

	for (int j = 0; j < 30; j++)
	{
		if(a[j] == 0)
		std::cout << j + 1 << std::endl;
	}

	return 0;
}