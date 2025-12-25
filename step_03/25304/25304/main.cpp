#include <iostream>

int main()
{
	int x;
	int n;

	std::cin >> x;
	std::cin >> n;

	int sum = 0;

	for (int i = 0; i < n; i++)
	{
		int a, b;
		std::cin >> a >> b;

		sum += (a * b);
	}

	if (x == sum)
	{
		std::cout << "Yes" << std::endl;
	}
	else
	{
		std::cout << "No" << std::endl;
	}

	return 0;
}