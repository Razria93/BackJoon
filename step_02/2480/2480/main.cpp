#include <iostream>

int main()
{
	int a, b, c;

	std::cin >> a >> b >> c;

	if ((a == b) && (b == c) && (c == a)) // all-equal
	{
		std::cout << 10000 + (a * 1000) << std::endl;
	}
	else if ((a != b) && (b != c) && (c != a)) // all-non-equal
	{
		int x = a > b ? a : b;
		int y = c > x ? c : x;

		std::cout << y * 100 << std::endl;
	}
	else
	{
		int z;

		if (a == b)
			z = a;
		else if (b == c)
			z = b;
		else // (c == a)
			z = c;

		std::cout << 1000 + (z * 100) << std::endl;
	}

	return 0;
}