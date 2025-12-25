#include <iostream>

int main()
{
	int n;
	std::cin >> n; // Á¤¼ö N (4 <= N <= 1000; N % 4 == 0)

	int num = n / 4;

	for (int i = 0; i < num; i++)
	{
		std::cout << "long " << std::flush;
	}

	std::cout << "int" << std::endl;

	return 0;
}