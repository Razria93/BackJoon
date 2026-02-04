#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N, M; // 행 N개 / 열 M개
	std::cin >> N >> M;

	int** array2D = new int* [N];

	for (int i = 0; i < N; ++i) // 행 단위 순회
	{
		int* array1D = new int[M];	// i행

		for (int j = 0; j < M; ++j) //i행의 열 단위 순회
		{
			int temp;
			std::cin >> temp;

			array1D[j] = temp;		// i행 j열
		}

		array2D[i] = array1D;
	}

	for (int i = 0; i < N; ++i) // 행 단위 순회
	{
		int* array1D = array2D[i];	// i행

		for (int j = 0; j < M; ++j) //i행의 열 단위 순회
		{
			int temp_XY;
			std::cin >> temp_XY;

			array1D[j] += temp_XY; // i행 j열
		}
	}

	for (int i = 0; i < N; ++i)
	{
		int* array1D = array2D[i];

		for (int j = 0; j < M; ++j)
		{
			int value_ij = array1D[j];
			std::cout << value_ij << ' ';
		}

		std::cout << '\n';
	}

	return 0;
}