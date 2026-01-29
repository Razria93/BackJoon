#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string S;
	std::cin >> S;

	int size = S.size();
	std::string S_reverse(size, -1);
	
	for (int i = 0; i < size; ++i)
	{
		S_reverse[size - 1 - i] = S[i];
	}

	bool bEqual = false;
	for (int j = 0; j < size; ++j)
	{
		if (S_reverse[j] != S[j])
		{
			bEqual = false;
			break;
		}
		else
		{
			bEqual = true;
			continue;
		}
	}

	if (bEqual == true)
		std::cout << 1;
	else
		std::cout << 0;

	return 0;
}