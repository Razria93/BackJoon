#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	size_t count = 1;

	while (true)
	{
		size_t sum = count * (count + 1) / 2;

		if (N <= sum)
		{
			break;
		}
		else
		{
			++count;
		}
	}

	size_t container_idx = count + 1;
	size_t prev_sum = (count - 1) * count / 2;
	size_t idx = N - prev_sum;
	size_t value = container_idx - idx;

	if ((container_idx % 2) == 1)
	{
		std::cout << idx << '/' << value;
	}
	else
	{
		std::cout << value << '/' << idx;
	}

	return 0;
}