#include <iostream>

int main()
{
	int a, b;

	std::cin >> a >> b;

	int n_100 = b / 100;
	int n_10 = (b % 100) / 10;
	int n_1 = (b % 10) / 1;

	std::cout << a * n_1 << std::endl;
	std::cout << a * n_10 << std::endl;
	std::cout << a * n_100 << std::endl;
	std::cout << a * b << std::endl;
	
	return 0;
}