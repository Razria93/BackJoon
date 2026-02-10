#include <iostream>

bool Check666(size_t InNumbering)
{
	size_t cached = InNumbering;
	size_t count = 0;

	if (cached == 0) return false;

	while (cached > 0)
	{
		size_t factor = cached % 10;
		
		if (factor == 6)
		{
			++count;

			if (count == 3) break;
		}
		else
		{
			count = 0;
		}

		cached /= 10;
	}

	return count == 3 ? true : false;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t IDX;
	std::cin >> IDX;

	size_t count = 0;
	size_t numbering = 0;
	while (true)
	{
		if (Check666(numbering))
		{
			++count;

			if (count == IDX) break;
		} 

		++numbering;
	}

	std::cout << numbering;

	return 0;
}