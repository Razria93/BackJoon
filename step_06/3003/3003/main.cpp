#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int ki, qu, ro, vi, ni, pa;

	std::cin >> ki >> qu >> ro >> vi >> ni >> pa;

	std::cout 
		<< 1 - ki << ' ' 
		<< 1 - qu << ' ' 
		<< 2 - ro << ' ' 
		<< 2 - vi << ' ' 
		<< 2 - ni << ' ' 
		<< 8 - pa;

	return 0;
}