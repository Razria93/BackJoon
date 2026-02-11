#include <iostream>
#include <unordered_map>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N, M;
	std::cin >> N >> M;

	std::unordered_map<int, std::string> map_num;
	std::unordered_map<std::string, int> map_name;
	map_num.reserve(N);
	map_name.reserve(N);

	for (int i = 1; i <= N; ++i)
	{
		std::string X;
		std::cin >> X;

		map_num[i] = X;
		map_name[X] = i;
	}

	for (int i = 1; i <= M; ++i)
	{
		std::string X;
		std::cin >> X;

		if (X[0] >= '0' && X[0] <= '9')
		{
			int num = std::stoi(X);
			std::cout << map_num[num];
		}
		else
		{
			std::cout << map_name[X];
		}

		std::cout << '\n';
	}

	return 0;
}