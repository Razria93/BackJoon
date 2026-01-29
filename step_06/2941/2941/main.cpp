#include <iostream>
#include <string>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	std::string S;
	std::cin >> S;

	int count = 0;

	for (int i = 0; i < S.size(); )
	{
		// 문자열의 i번째 문자마다 비교해야하는 문자열의 크기만큼 잘라셔 비교

		if (i + 2 < S.size())
		{
			std::string three = S.substr(i, 3); // i번째 문자율부터 크기 3만큼 자름 (i / i + 1 / i + 2)

			if (three == "dz=")
			{
				++count;
				i += 3;
				continue;
			}
		}

		if (i + 1 < S.size()) 
		{
			std::string two = S.substr(i, 2); // i번째 문자율부터 크기 2만큼 자름 (i / i + 1)

			if (two == "c=" || two == "c-" || two == "d-" ||
				two == "lj" || two == "nj" || two == "s=" || two == "z=")
			{
				++count;
				i += 2;
				continue;
			}
		}

		// 해당사항 없을 경우
		++count;
		i += 1;
		continue;
	}

	std::cout << count;

	return 0;
}