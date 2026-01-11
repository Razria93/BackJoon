#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string S;
	std::cin >> S;

	for (int i = 0; i < 26; i++)
	{
		// std::cout << "word: " << (char)('a' + i) << ": ";
		// std::cout << "ASKII: " << (int)'a' + i << std::endl;

		int temp = -1;
		for (int j = 0; j < S.size(); j++)
		{
			if ((int)S[j] == (int)('a' + i))
			{
				// std::cout << "Found: " << j << std::endl;
				temp = j;
				break;
			}
		}
		std::cout << temp << " ";
	}

	return 0;
}