#include <iostream>

int main()
{
	int N;
	std::cin >> N;

	std::string num;
	std::cin >> num;

	uint64_t sum = 0;

	for (int i = 0; i < N; ++i)
	{
		// std::cout << (int)num[i] - (int)'0' << std::endl;
		sum += (int)num[i] - (int)'0';
	}

	std::cout << sum << std::endl;

	return 0;
}