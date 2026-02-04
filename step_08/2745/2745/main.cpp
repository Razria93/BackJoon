#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string S;
	std::cin >> S;

	size_t B;
	std::cin >> B;

	int sum = 0;

	for (int i = 0; i < S.size(); ++i)
	{
		int int_S = 0;

		if (S[i] >= '0' && S[i] <= '9')
		{
			int_S = S[i] - '0';
		}
		else // B >= 10 && B <= 36
		{
			int_S = S[i] - 'A' + 10;
		}

		int mul = 1;
		int upper = (S.size() - 1) - i;

		if (upper > 0)
		{
			for (int j = 0; j < upper; ++j)
			{
				mul *= B;
			}
		}

		sum += int_S * mul;
	}

	std::cout << sum;

	return 0;
}