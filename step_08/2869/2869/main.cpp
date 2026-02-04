#include <iostream>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t A, B, V;
	std::cin >> A >> B >> V;

	size_t Day = 0;

	// Last Day
	++Day; 
	V -= A;

	// Each Day
	Day += ceil(V / (A - B));

	std::cout << Day;

	return 0;
}