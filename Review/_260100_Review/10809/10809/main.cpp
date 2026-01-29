#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string S;
	std::cin >> S;

	int num = 'z' - 'a' + 1;
	for (int i = 0; i < num; ++i)
	{
		int point = -1;

		for (int j = 0; j < S.size(); ++j)
		{
			if (S[j] == ('a' + i))
			{
				point = j;
				break;
			}
		}

		std::cout << point << ' ';
	}

	return 0;
}