#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n, m;
	std::cin >> n >> m;

	int* arr = new int[n] {0};

	int a, b, c;

	for (int i = 0; i < m; i++)
	{
		std::cin >> a >> b >> c;

		int start = a - 1;
		int end = b - 1;
		int ball_num = c;

		for (int j = start; j <= end; j++)
		{
			arr[j] = ball_num;
		}
	}

	for (int k = 0; k < n; k++)
	{
		std::cout << arr[k] << " ";
	}
}