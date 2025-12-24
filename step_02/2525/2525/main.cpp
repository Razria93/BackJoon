#include <iostream>

int main()
{
	int a, b;
	int c;

	std::cin >> a >> b;
	std::cin >> c;

	int h = c / 60;
	int m = c % 60;

	int h_after = a + h;
	int m_after = b + m;

	if (m_after >= 60)
	{
		h_after += 1;
		m_after -= 60;
	}

	if (h_after >= 24)
	{
		h_after -= 24;
	}

	std::cout << h_after << " " << m_after << std::endl;

	return 0;
}