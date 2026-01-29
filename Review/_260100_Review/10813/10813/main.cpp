#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N; // 바구니 갯수
	int M; // 시행 횟수

	std::cin >> N >> M;

	// 조건
	// 1. 최초 바구니 안의 공 idx는 바구니 idx와 동일
	// 2. swap 문제

	int* arr = new int[N + 1] {0};

	// 공 번호 초기화
	for (int i = 1; i <= N; ++i)
	{
		arr[i] = i;
	}

	// swap
	for (int j = 1; j <= M; ++j)
	{
		int A, B;
		std::cin >> A >> B;
		
		int temp = arr[A];

		arr[A] = arr[B];
		arr[B] = temp;
	}

	for (int p = 1; p <= N; ++p)
	{
		std::cout << arr[p] << ' ';
	}

	delete[] arr;

	return 0;
}