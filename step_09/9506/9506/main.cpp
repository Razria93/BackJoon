#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::vector<int> Factors;

	int N;
	int Sum = 0;

	while (true)
	{
		std::cin >> N;

		Factors.clear();
		Sum = 0;

		if (N == -1) break;

		for (int i = 1; i < N; ++i)
		{
			if ((N % i) == 0)
			{
				Factors.push_back(i);
				Sum += i;
			}
		}

		if (Sum != N)
		{
			std::cout << N << " is NOT perfect." << '\n';
			continue;
		}

		std::cout << N << " = ";

		for (int i = 0; i < Factors.size(); ++i)
		{
			std::cout << Factors[i];

			if (i == (Factors.size() - 1))
			{
				std::cout << '\n';
			}
			else
			{
				std::cout << " + ";
			}
		}
	}

	return 0;
}