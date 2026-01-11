#include <iostream>
#include <string>
#include <cmath>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	std::string A, B;
	std::cin >> A >> B;

	int num_A = 0;
	int num_B = 0;

	int zero = (int)'0';

	for (int i = 0; A[i] != '\0'; i++)
	{
		num_A += ((int)A[i] - zero)* (int)pow(10, i);
	}

	for (int j = 0; B[j] != '\0'; j++)
	{
		num_B += ((int)B[j] - zero) * (int)pow(10, j);
	}

	// std::cout << "num_A: " << num_A << " / num_B: " << num_B << std::endl;
	std::cout << (num_A > num_B ? num_A : num_B) << std::endl;
	
	return 0;
}