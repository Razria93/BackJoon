#include <iostream>


void Print_Num(int* arr, int num)
{
	for (int i = 1; i <= num; i++)
	{
		// std::printf("%d번째 바구니 숫자: %d\n", i, arr[i]);
		std::cout << arr[i] << " ";
	}
}

int main()
{
	int n, m;

	std::cin >> n >> m;

	int* arr = new int[n + 1];

	for (int i = 1; i <= n; i++)
	{
		arr[i] = i;
	}

	// Print_Num(arr, n);

	int a, b;
	for (int i = 1; i <= m; i++)
	{
		std::cin >> a >> b;			// 바구니 번호: a번쨰, b번째
		int num = (b - a + 1);		// 바구니 갯수

		for (int j = 0; j < num / 2; j++)
		{
			int target_a = a + j;
			int target_b = b - j;

			int temp = arr[target_a];
			arr[target_a] = arr[target_b];
			arr[target_b] = temp;

			// Print_Num(arr, n);
		}
	}

	Print_Num(arr, n);

	return 0;
}
