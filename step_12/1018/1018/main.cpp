#include <iostream>
#include <vector>
#include <climits>

int Count(const std::vector<char>& InVector, const char& InStart_Char, int InStart_M, int InStart_N, int InM)
{
	int count = 0;

	for (int j = 0; j < 8; ++j)
	{
		for (int i = 0; i < 8; ++i)
		{
			char color;

			if ((i + j) % 2 == 0)
			{
				color = (InStart_Char == 'W') ? 'W' : 'B';
			}
			else
			{
				color = (InStart_Char == 'W') ? 'B' : 'W';
			}

			char color_vec = InVector[(InStart_M + i) + (InStart_N + j) * InM];

			if (color != color_vec)
			{
				++count;
			}
		}
	}

	return count;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N, M;
	std::cin >> N >> M;

	std::vector<char> arr;

	for (int i = 0; i < N * M; ++i)
	{
		char C;
		std::cin >> C;

		arr.push_back(C);
	}

	int Min = INT_MAX;

	for (int y = 0; y + 8 <= N; ++y)
	{
		for (int x = 0; x + 8 <= M; ++x)
		{
			int result_W = Count(arr, 'W', x, y, M);
			int result_B = Count(arr, 'B', x, y, M);

			Min = std::min(Min, std::min(result_W, result_B));
		}
	}

	std::cout << Min;

	return 0;
}