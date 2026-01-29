#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string S;
	std::cin >> S;

	const int alphabetSize = 'z' - 'a' + 1;
	int num[alphabetSize]{ 0 };

	for (int i = 0; i < S.size(); ++i)
	{
		if (S[i] >= 'a' && S[i] <= 'z')
		{
			int idx = S[i] - 'a';
			num[idx] += 1;
		}
		else if (S[i] >= 'A' && S[i] <= 'Z')
		{
			int idx = S[i] - 'A';
			num[idx] += 1;
		}
	}

	bool bValidation = false;
	char target = ' ';
	int maxNum = 0;

	for (int j = 0; j < alphabetSize; ++j)
	{
		if (maxNum < num[j])
		{
			bValidation = true;
			target = char('A' + j);
			maxNum = num[j];
		}
		else if (maxNum == num[j])
		{
			bValidation = false;
		}
	}

	if (bValidation == false)
	{
		std::cout << '?';
	}
	else if (bValidation == true && maxNum > 0)
	{
		std::cout << target;
	}

	return 0;
}