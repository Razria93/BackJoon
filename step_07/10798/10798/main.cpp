#include <iostream>
#include <string>

int main()
{
	char array[5][15] = {};

	std::string S;

	for (size_t i = 0; i < 5; ++i)
	{
		std::getline(std::cin, S);

		for (size_t j = 0; j < S.size(); ++j)
		{
			array[i][j] = S[j];
		}
	}

	for (size_t j = 0; j < 15; ++j)
	{
		for (size_t i = 0; i < 5; ++i)
		{
			if (array[i][j] != '\0')
				std::cout << array[i][j];
		}
	}

	return 0;
}