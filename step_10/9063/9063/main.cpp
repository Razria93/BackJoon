#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;

	int MinX;
	int MaxX;
	
	int MinY;
	int MaxY;

	std::cin >> N;

	for (int i = 0; i < N; ++i)
	{
		int X, Y;
		std::cin >> X >> Y;

		if (i == 0)
		{
			MinX = X;
			MaxX = X;
			MinY = Y;
			MaxY = Y;

			continue;
		}

		if (X < MinX)
		{
			MinX = X;
		}
		else if (X > MaxX)
		{
			MaxX = X;
		}

		if (Y < MinY)
		{
			MinY = Y;
		}
		else if (Y > MaxY)
		{
			MaxY = Y;
		}
	}

	long long Size = abs(MaxX - MinX) * abs(MaxY - MinY);

	std::cout << Size;

	return 0;
}