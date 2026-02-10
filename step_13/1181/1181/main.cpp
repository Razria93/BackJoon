#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	size_t N;
	std::cin >> N;

	std::vector<std::string> A;
	A.reserve(N);

	for (size_t i = 0; i < N; ++i)
	{
		std::string S;
		std::cin >> S;

		A.push_back(S);
	}

	// std::sort(A.begin(), A.end());

	std::sort(A.begin(), A.end(), 
		[](const auto& lhs, const auto& rhs) 
		{
			if (lhs.size() != rhs.size())
			{
				return lhs.size() < rhs.size();
			}
	
			// lhs.size() == rhs.size()
			for (size_t i = 0; i < lhs.size(); ++i)
			{
				if (lhs[i] != rhs[i]) 
				{
					return lhs[i] < rhs[i];
				}
			}

			return false;
		});

	std::string cached;

	for (size_t i = 0; i < A.size(); ++i)
	{
		if (cached != A[i]) // empty || not equal
		{
			cached = A[i];
			std::cout << A[i] << '\n';
		}
	}

	return 0;
}