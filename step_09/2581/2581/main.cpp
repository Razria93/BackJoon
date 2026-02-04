#include <iostream>

bool IsPrime(int InValue)
{
	if (InValue < 2) return false;

	for (int i = 2; i <= InValue / i; ++i)
	{
		if (InValue % i == 0) return false;
	}

	return true;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int Min, Max;
	std::cin >> Min >> Max;

	int Sum = 0;
	int Min_Prime = 0;

	for (int i = Min; i <= Max; ++i)
	{
		if (IsPrime(i))
		{
			Sum += i;

			if (Min_Prime == 0)
			{
				Min_Prime = i;
			}
		}
	}

	if (Min_Prime != 0)
	{
		std::cout << Sum << '\n';
		std::cout << Min_Prime << '\n';
	}
	else
	{
		std::cout << -1 << '\n';
	}

	return 0;
}