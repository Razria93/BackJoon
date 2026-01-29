#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.tie(0);

	int T;
	std::cin >> T;

	for (int i = 1; i <= T; ++i)
	{
		int A, B;
		std::cin >> A >> B;

		std::printf("Case #%d: %d\n", i, A + B);
	}

	return 0;
}