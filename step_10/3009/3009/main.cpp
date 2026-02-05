#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::pair<size_t, bool> Point_X1 = { 0, false };
	std::pair<size_t, bool> Point_X2 = { 0, false };

	std::pair<size_t, bool> Point_Y1 = { 0, false };
	std::pair<size_t, bool> Point_Y2 = { 0, false };

	for (int i = 0; i < 3; ++i)
	{
		size_t X, Y;
		std::cin >> X >> Y;

		if (Point_X1.first == X || Point_X2.first == X)
		{
			if (Point_X1.first == X)
				Point_X1.second = true;
			else
				Point_X2.second = true;
		}
		else
		{
			if (Point_X1.first == 0)
				Point_X1.first = X;
			else
				Point_X2.first = X;
		}

		if (Point_Y1.first == Y || Point_Y2.first == Y)
		{
			if (Point_Y1.first == Y)
				Point_Y1.second = true;
			else
				Point_Y2.second = true;
		}
		else
		{
			if (Point_Y1.first == 0)
				Point_Y1.first = Y;
			else
				Point_Y2.first = Y;
		}
	}

	if (Point_X1.second == false)
	{
		std::cout << Point_X1.first;
	}
	else
	{
		std::cout << Point_X2.first;
	}

	std::cout << ' ';

	if (Point_Y1.second == false)
	{
		std::cout << Point_Y1.first;
	}
	else
	{
		std::cout << Point_Y2.first;
	}

	return 0;
}