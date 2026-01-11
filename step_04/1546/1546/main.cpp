#include <iostream>

void Print(int* arr, int num)
{
	for (int i = 1; i <= num; i++)
		std::cout << "arr_" << i << ": " << arr[i] << " / ";

	std::cout << '\n';
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);


	int N;			// 시험 본 과목 갯수 ( <= 1000; )
	int M;			// 시험 점수 중 최고점 (MAX)
	float New_Per;	// 조작 보정값 (100 / M)

	std::cin >> N;

	int* arr = new int[N + 1];

	for (int h = 1; h <= N; h++)
	{
		std::cin >> arr[h];
	}

	// Print(arr, N);

	M = arr[1];

	for (int j = 2; j <= N; j++)
	{
		if (arr[j] >= M)
			M = arr[j];
	}

	// std::cout << "M: " << M << '\n';

	New_Per = 100.f / (float)M;

	std::cout.precision(7);
	// std::cout << "New_Per: " << New_Per << '\n';

	float Sum = 0;

	for (int k = 1; k <= N; k++)
	{
		Sum += (float)arr[k];
	}

	float Avr = (float)(Sum / N);

	// std::cout << "Avr: " << Avr << '\n';

	float New_Avr = Avr * New_Per;

	// std::cout << "New_Avr: " << New_Avr << '\n';
	std::cout << New_Avr << '\n';

	return 0;
}