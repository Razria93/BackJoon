#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t A, B;
	
	while (true)
	{
		std::cin >> A >> B;

		if (A == 0 && B == 0) break;

		if ((A % B) == 0)
		{
			std::cout << "multiple" << '\n';
		}
		else if ((B % A) == 0)
		{
			std::cout << "factor" << '\n';
		}
		else
		{
			std::cout << "neither" << '\n';
		}
	}

	return 0;
}