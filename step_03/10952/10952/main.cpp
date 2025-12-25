#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	while (true)
	{
		int a, b;
		std::cin >> a >> b;

		if (a == 0 && b == 0) break;

		std::cout << a + b << '\n';
	}

	return 0;
}