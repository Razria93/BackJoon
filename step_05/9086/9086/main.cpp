#include <iostream>

int main()
{
	unsigned int T;
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		std::string S;
		std::cin >> S;
		// std::cout << S[0] << S[S.size() - 1] << std::endl;
		std::cout << *S.begin() << *(--S.end()) << std::endl;
	}

	return 0;
}