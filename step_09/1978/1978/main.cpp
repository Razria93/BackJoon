#include <iostream>

bool IsPrime(size_t InValue)
{
	if (InValue == 1) return false;

	for (size_t i = 2; i * i <= InValue; ++i)
	{
		if (InValue % i == 0) return false;
	}

	return true;
}

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	size_t Count = 0;

	for (size_t i = 0; i < N; ++i)
	{
		size_t Target;
		std::cin >> Target;

		if (IsPrime(Target))
		{
			++Count;
		}
	}

	std::cout << Count;

	return 0;
}