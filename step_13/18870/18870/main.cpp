#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int N;
	std::cin >> N;

	std::unordered_map<int, int> M;
	std::vector<int> A;
	std::vector<int> Cached;

	for (int i = 0; i < N; ++i)
	{
		int X;
		std::cin >> X;

		A.push_back(X);
		Cached.push_back(X);
	}

	std::sort(A.begin(), A.end());

	auto it = std::unique(A.begin(), A.end());
	A.erase(it, A.end());


	for (int i = 0; i < A.size(); ++i)
	{
		M.insert({ A[i], i });
	}

	for (int i = 0; i < Cached.size(); ++i)
	{
		int target = Cached[i];
		const auto& f = M.find(target);

		std::cout << f->second << ' ';
	}

	return 0;
}