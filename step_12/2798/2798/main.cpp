#include <iostream>
#include <vector>
#include <algorithm>

void Print(std::vector<size_t> InVector)
{
	for (int i = 0; i < InVector.size(); ++i)
	{
		std::cout << InVector[i] << ' ';
	}

	std::cout << '\n';
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N, M;
	std::cin >> N >> M;

	std::vector<size_t> Arr;

	for (int i = 0; i < N; ++i)
	{
		size_t CardNum;
		std::cin >> CardNum;

		Arr.push_back(CardNum);
	}

	std::sort(Arr.begin(), Arr.end());

	size_t Max = 0;
	
	for (size_t i = 0; i < N; ++i)
	{
		size_t Num_0 = Arr[i];
		
		if (Num_0 > M) break;

		for (size_t j = i + 1; j < Arr.size(); ++j)
		{
			size_t Num_1 = Arr[j];

			if (Num_0 + Num_1 > M) break;
			
			for (size_t k = j + 1; k < Arr.size(); ++k)
			{
				size_t Num_2 = Arr[k];
				size_t Sum = Num_0 + Num_1 + Num_2;

				if (Sum > M) break;

				if (Sum > Max)
				{
					Max = Sum;
				}
			}
		}
	}

	std::cout << Max;

	return 0;
}