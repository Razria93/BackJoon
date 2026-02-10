#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b, c, d, e, f;
	std::cin >> a >> b >> c >> d >> e >> f;


	for (int X = -999; X <= 999; ++X)
	{
		for (int Y = -999; Y <= 999; ++Y)
		{
			if ((a * X + b * Y == c) && (d * X + e * Y == f))
			{
				std::cout << X << ' ' << Y;
				return 0;
			}
		}
	}

	return 0;
}