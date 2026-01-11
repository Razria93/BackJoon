#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;
	std::cin >> n >> m;

	int* a = new int[n];

	for (int i = 0; i < n; i++)
	{
		int ball_num = i + 1;

		a[i] = ball_num;
	}

	int p, q;

	for (int j = 0; j < m; j++)
	{
		std::cin >> p >> q;

		int arr_num_p = p - 1;
		int arr_num_q = q - 1;

		int temp = a[arr_num_p];
		a[arr_num_p] = a[arr_num_q];
		a[arr_num_q] = temp;
	}

	for (int k = 0; k < n; k++)
	{
		std::cout << a[k] << " ";
	}

	delete[] a;

	return 0;
}