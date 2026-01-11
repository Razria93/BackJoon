#include <iostream>

#define MAX 1000000
#define MIN -1000000

int main()
{
	using namespace std;

	std::ios::sync_with_stdio(0);
	std::cin.tie(0);

	int n;
	cin >> n;
	// scanf("%d", &n);

	// int* a = new int[n];
	static int a[1000001];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		// scanf("%d", &a[i]);
	}

	// int mn = MAX;
	// int mx = MIN;

	int mn = a[0];
	int mx = a[0];

	for (int j = 0; j < n; j++)
	{
		if (a[j] < mn)
			mn = a[j];

		if (a[j] > mx)
			mx = a[j];
	}

	std::cout << mn << " " << mx << '\n';
	// printf("%d %d", min, max);

	// delete[] a;

	return 0;
}