#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t A, B, C;
	std::cin >> A >> B >> C;

	if (A == B && B == C)
	{
		std::cout << A + B + C;
	}
	else
	{
		size_t Max = std::max(std::max(A, B), C);

		if (Max == A && !(A < B + C))
		{
			A = B + C - 1;
		}
		else if (Max == B && !(B < C + A))
		{
			B = C + A - 1;
		}
		else if (Max == C && !(C < A + B))
		{
			C = A + B - 1;
		}

		std::cout << A + B + C;
	}

	return 0;
}