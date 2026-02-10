#include <iostream>
#include <vector>
#include <algorithm>

int DigitSum(int InValue)
{
	int Sum = 0;

	while (InValue > 0)
	{
		Sum += InValue % 10;
		InValue /= 10;
	}

	return Sum;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	int Answer = 0;
	for (int i = 1; i < N; ++i)
	{
		if (i + DigitSum(i) == N)
		{
			Answer = i;
			break;
		}
	}

	std::cout << Answer;

	return 0;
}