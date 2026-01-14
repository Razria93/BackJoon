#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int N; // 바구니 갯수
	int M; // 시행 횟수

	std::cin >> N >> M;

	std::vector<int> vec = std::vector<int>(N + 1, 0);

	// init
	for (int i = 1; i <= N; ++i)
	{
		vec[i] = i;
	}

	for (int j = 1; j <= M; ++j)
	{
		int A, B;

		std::cin >> A >> B;

		// 정렬 불필요 (백준은 A <= B를 보장함)
		// M N 입력값 때문에 헷갈린 것

		int Left, Right;

		if (A <= B)
		{
			Left = A;
			Right = B;
		}
		else // A > B
		{
			Left = B;
			Right = A;
		}

		// std::reverse(vec.begin() + Left, vec.begin() + Right + 1)
		int changeNum = (Right - Left + 1) / 2;

		for (int k = 0; k < changeNum; ++k)
		{
			int temp = vec[Left + k];
			vec[Left + k] = vec[Right - k];
			vec[Right - k] = temp;
		}
	}

	for (int l = 1; l <= N; ++l)
	{
		std::cout << vec[l] << ' ';
	}

	return 0;
}