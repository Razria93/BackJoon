#include <iostream>

int main()
{
	size_t N;
	std::cin >> N;

	size_t count = 0;
	while (true)
	{
		size_t max = 1 + ((3 * count) * (count + 1));

		if (N <= max)
		{
			break;
		}
		else
		{
			++count;
		}
	}

	std::cout << count + 1;

	return 0;
}