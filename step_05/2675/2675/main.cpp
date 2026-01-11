#include <iostream>

int main()
{
	int T;
	std::cin >> T;

	for (int i = 0; i < T; i++)
	{
		int R;
		std::cin >> R;
		// std::cout << "R: " << R << '\n';


		std::string S;
		std::cin >> S;
		// std::cout << "S: " << S << '\n';

		for (int j = 0; j < S.size(); j++)
		{
			// std::cout << "j: " << j << '\n';

			for (int k = 0; k < R; k++)
			{
				std::cout << S[j];
			}
		}

		std::cout << '\n';
	}

	return 0;

}