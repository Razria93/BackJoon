#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t A, B, C;
	std::cin >> A >> B >> C;

	if ((A + B + C) != 180ULL)
	{
		std::cout << "Error";
	}
	else
	{
		if (A != B && B != C && C != A)
		{
			std::cout << "Scalene";
		}
		else if (A == B && B == C)
		{
			std::cout << "Equilateral";
		}
		else
		{
			std::cout << "Isosceles";
		}
	}

	return 0;
}