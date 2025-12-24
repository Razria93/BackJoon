#include <iostream>

int main()
{
	int h, m;

	std::cin >> h >> m;

	if (m >= 45)
	{
		m -= 45;
	}
	else
	{
		h += (h == 0) ? (24 - 1) : -1;
		m += 15;
	}

	std::cout << h << " " << m << std::endl;

	return 0;
}