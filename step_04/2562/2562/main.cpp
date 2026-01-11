#include <iostream>
#include <stdio.h>

int main()
{
	using namespace std;

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	static int a[9];

	for (int i = 0; i < 9; i++)
	{
		cin >> a[i];
	}

	int mx = a[0];
	int num = 0;

	for (int j = 0; j < 9; j++)
	{
		if (a[j] >= mx)
		{
			mx = a[j];
			num = j + 1;
		}
	}

	std::cout << mx << '\n';
	std::cout << num << '\n';

	return 0;
}