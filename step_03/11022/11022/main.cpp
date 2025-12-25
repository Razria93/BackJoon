#include <iostream>

int main()
{
	int t;

	std::cin >> t;

	for (int i = 1; i <= t; i++)
	{
		int a, b;
		std::cin >> a >> b;

		printf("Case #%d: %d + %d = %d\n", i, a, b, (a + b));
	}

	return 0;
}