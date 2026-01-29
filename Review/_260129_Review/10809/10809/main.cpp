#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	std::string S;
	std::cin >> S;

	const int num = 'z' - 'a' + 1;

	int pos[num];
	std::fill(pos, pos + num, -1);

	for (int i = 0; i < S.size(); ++i)
	{
		int idx = S[i] - 'a';

		if (pos[idx] == -1)
			pos[idx] = i;
	}

	for (int j = 0; j < num; ++j)
	{
		std::cout << pos[j] << ' ';
	}

	return 0;
}