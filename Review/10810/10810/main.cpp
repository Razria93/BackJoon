#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N; // 바구니 갯수
	int M; // 시행 횟수

	std::cin >> N >> M;

	int* arr = new int[N + 1] {0}; // idx 0 사용 X, idx 1 ~ N 사용 O

	for (int i = 1; i <= M; ++i)
	{
		int start, end;
		std::cin >> start >> end;

		int ballNum;
		std::cin >> ballNum;

		for (int j = start; j <= end; ++j)
		{
			arr[j] = 0;
			arr[j] = ballNum;
		}
	}

	for (int k = 1; k <= N; ++k)
	{
		std::cout << arr[k] << ' ';
	}

	delete[] arr;

	return 0;
}