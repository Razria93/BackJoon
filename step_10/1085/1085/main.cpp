#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t X, Y, W, H;
	std::cin >> X >> Y >> W >> H;

	size_t Min_Wide = std::min(X, W - X);
	size_t Min_Height = std::min(Y, H - Y);

	size_t Result_Final = std::min(Min_Wide, Min_Height);

	std::cout << Result_Final;

	return 0;
}