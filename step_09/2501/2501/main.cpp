#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t A, B;
	std::cin >> A >> B;

	std::vector<size_t> factor;

	size_t count = 0;
	for (size_t i = 1; i <= A; ++i)
	{
		if ((A % i) == 0)
		{
			factor.push_back(i);
			++count;
		}
	}

	if (B > count)
	{
		std::cout << '0';
	}
	else // B < count
	{
		std::cout << factor[B - 1];
	}

	return 0;
}