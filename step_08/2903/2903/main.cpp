#include <iostream>

int Recursive(size_t InCount)
{
	if (InCount == 0) return 2;

	return (2 * Recursive(InCount - 1) - 1);
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	int Num_Dot = Recursive(N);

	std::cout << Num_Dot * Num_Dot;

	return 0;
}