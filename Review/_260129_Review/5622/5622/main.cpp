#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string S;
	std::cin >> S;

	const int num = 'Z' - 'A' + 1;
	int time[num] =
	{
		3, 3, 3,	// ABC
		4, 4, 4,	// DEF
		5, 5, 5,	// GHI
		6, 6, 6,	// JKL
		7, 7, 7,	// MNO
		8, 8, 8, 8,	// PQRS
		9, 9, 9,	// TUV
		10,10,10,10 // WXYZ
	};

	int sum = 0;

	for (int i = 0; i < S.size(); ++i)
	{
		int idx = S[i] - 'A';

		sum += time[idx];
	}

	std::cout << sum << '\n';

	return 0;
}