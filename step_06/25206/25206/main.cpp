#include <iostream>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);
	std::cout.precision(7);

	// std::vector<std::pair<std::string, double>> Container =
	// {
	// 	std::pair<std::string, double>("A+", 4.5),
	// 	std::pair<std::string, double>("A0", 4.0),
	// 	std::pair<std::string, double>("B+", 3.5),
	// 	std::pair<std::string, double>("B0", 3.0),
	// 	std::pair<std::string, double>("C+", 2.5),
	// 	std::pair<std::string, double>("C0", 2.0),
	// 	std::pair<std::string, double>("D+", 1.5),
	// 	std::pair<std::string, double>("D0", 1.0),
	// 	std::pair<std::string, double>("F", 0.0)
	// };

	double sum_child = 0.0;
	double sum_parent = 0.0;

	for (int i = 0; i < 20; ++i)
	{
		std::string S;
		double N;
		std::string G;

		double G_N;

		std::cin >> S >> N >> G;
		if (G == "A+") { G_N = 4.5; }
		else if (G == "A0") { G_N = 4.0; }
		else if (G == "B+") { G_N = 3.5; }
		else if (G == "B0") { G_N = 3.0; }
		else if (G == "C+") { G_N = 2.5; }
		else if (G == "C0") { G_N = 2.0; }
		else if (G == "D+") { G_N = 1.5; }
		else if (G == "D0") { G_N = 1.0; }
		else if (G == "F") { G_N = 0.0; }
		else if (G == "P") { continue; }

		sum_child += 1.0 * N * G_N;
		sum_parent += 1.0 * N;
	}

	double result = sum_child / sum_parent;
	std::cout << result;

	return 0;
}