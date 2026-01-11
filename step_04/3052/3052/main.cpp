#include <iostream>
#include <vector>

int main()
{
	int num = 10;

	int* a = new int[num];

	for (int i = 0; i < num; i++)
	{
		int temp;
		std::cin >> temp;

		a[i] = temp % 42;
	}

	for (int k = 0; k < num; k++)
	{
		for (int j = k + 1; j < 10; j++)
		{
			if (a[k] == a[j])
			{
				a[k] = -1;
				break;
			}
		}
	}

	int nums = 0;

	for (int p = 0; p < num; p++)
	{
		if (a[p] != -1)
			++nums;
	}

	std::cout << nums << std::endl;

	delete[] a;

	return 0;
}