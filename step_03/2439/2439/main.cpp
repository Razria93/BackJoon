#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	std::cin >> n;

	for (int i = 1; i <= n; i++)
	{
		for (int j = n; j > 0; j--)
		{
			if (j <= i)
				std::cout << "*";
			else
				std::cout << " ";
		}

		std::cout << '\n';
	}
	
	return 0;
}