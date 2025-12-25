#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int a, b;

	while(true)
	{
		std::cin >> a >> b;
		
		if (std::cin.eof() == true) break;
		else std::cout << a + b << '\n';
	}

	return 0;
}