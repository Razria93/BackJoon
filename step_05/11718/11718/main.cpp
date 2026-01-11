#include <iostream>
#include <string>

int main()
{
	int num = 0;
	while (num <= 100)
	{
		std::string S;
		std::getline(std::cin, S);

		for (int i = 0; S[i] != '\0'; ++i)
		{
			std::cout << S[i];
		}
		std::cout << '\n';
		num++;
	}

	return 0;
}