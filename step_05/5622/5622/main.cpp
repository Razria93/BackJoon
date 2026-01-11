#include <iostream>
#include <string>
#include <cmath>

int SwitchNum(char In)
{
	if (In == 'A' || In == 'B' || In == 'C')
		return 2;

	if (In == 'D' || In == 'E' || In == 'F')
		return 3;

	if (In == 'G' || In == 'H' || In == 'I')
		return 4;

	if (In == 'J' || In == 'K' || In == 'L')
		return 5;

	if (In == 'M' || In == 'N' || In == 'O')
		return 6;

	if (In == 'P' || In == 'Q' || In == 'R' || In == 'S')
		return 7;

	if (In == 'T' || In == 'U' || In == 'V')
		return 8;

	if (In == 'W' || In == 'X' || In == 'Y' || In == 'Z')
		return 9;
}

int CalculateTime(int In)
{
	return In + 1;
}

int main()
{
	std::string S;
	std::cin >> S;

	int zero = (int)'0';
	int t = 0;

	for (int i = 0; S[i] != '\0'; i++)
	{
		t += CalculateTime(SwitchNum(S[i]));
		std::cout << t << std::endl;
	}

	return 0;
}