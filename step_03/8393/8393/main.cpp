#include <iostream>

int main()
{
	int num;
	std::cin >> num;

	long long result = 0;

	for (int i = 1; i <= num; i++)
	{
		result += i;
	}

	std::cout << result << std::endl;

	return 0;
}