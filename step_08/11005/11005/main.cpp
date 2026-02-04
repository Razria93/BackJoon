#include <iostream>
#include <unordered_map>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	size_t B;
	std::cin >> B;

	size_t Next = N;
	std::string S;

	while (true)
	{
		size_t Num_Remain = 0;
		char Char_Remain = '\0';

		if (Next < B)
		{
			Num_Remain = Next;

			if (Next <= 9)
			{
				Char_Remain = static_cast<char>(Num_Remain + '0');
			}
			else
			{
				Char_Remain = static_cast<char>((Num_Remain - 10) + 'A');
			}

			S.insert(S.begin(), Char_Remain);
			break;
		}

		Num_Remain = Next % B;
		Next = Next / B;

		if (Num_Remain <= 9)
		{
			Char_Remain = static_cast<char>(Num_Remain + '0');
		}
		else
		{
			Char_Remain = static_cast<char>((Num_Remain - 10) + 'A');
		}

		S.insert(S.begin(), Char_Remain);
		continue;
	}

	std::cout << S;

	return 0;
}