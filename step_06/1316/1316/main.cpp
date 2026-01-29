#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	const size_t num_a = 'z' - 'a' + 1;


	int count = 0;

	for (int j = 0; j < N; j++)
	{
		std::string S;
		std::cin >> S;

		bool check[num_a];
		std::fill(check, check + num_a, false);

		char cached = ' ';

		bool bCount = true;

		for (int i = 0; i < S.size(); ++i)
		{
			int idx = S[i] - 'a';

			if (S[i] != cached)
			{
				if (check[idx] == 1)
				{
					bCount = false;
					break;
				}
				else
				{
					check[idx] = 1;
					cached = S[i];
				}
			}
			else
			{
				continue;
			}
		}

		if (bCount)
		{
			++count;
		}
	}


	std::cout << count;

	return 0;
}