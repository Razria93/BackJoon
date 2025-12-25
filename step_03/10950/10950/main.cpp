#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	
	while(num > 0)
	{
		int a, b;
		std::cin >> a >> b;
		std::cout << a + b << std::endl;
		--num;
	}

	return 0;
}