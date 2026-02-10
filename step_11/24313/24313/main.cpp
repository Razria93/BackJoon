#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	long long a_1, a_0, c, n_0;
	std::cin >> a_1 >> a_0 >> c >> n_0;

	bool result = false;

	long long d = a_1 - c;

	if (d > 0)
	{
		result = false;
	}
	else if (d == 0)
	{
		if (a_0 <= 0)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}
	else // d < 0
	{
		if ((-d) * n_0 >= a_0)
		{
			result = true;
		}
		else
		{
			result = false;
		}
	}

	std::cout << result;

	return 0;
}