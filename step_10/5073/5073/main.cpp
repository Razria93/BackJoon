#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	while (true)
	{
		size_t A, B, C;
		std::cin >> A >> B >> C;

		size_t Max = std::max(std::max(A, B), C);

		if (A == 0 && B == 0 && C == 0) break;

		if (A == Max && !(A < (B + C)))
		{
			std::cout << "Invalid" << '\n';
			continue;
		}
		else if (B == Max && !(B < (C + A)))
		{
			std::cout << "Invalid" << '\n';
			continue;
		}
		else if (C == Max && !(C < (A + B)))
		{
			std::cout << "Invalid" << '\n';
			continue;
		}

		if (A == B && B == C)
		{
			std::cout << "Equilateral" << '\n';
		}
		else if (A != B && B != C && C != A)
		{
			std::cout << "Scalene" << '\n';
		}
		else
		{
			std::cout << "Isosceles" << '\n';
		}
	}

	return 0;
}