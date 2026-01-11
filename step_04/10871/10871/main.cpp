#include <iostream>

using namespace std;

int main()
{
	int n, x;
	cin >> n >> x;

	int a[10000];

	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	for (int j = 0; j < n; j++)
	{
		if (a[j] < x)
			cout << a[j] << " ";
	}

	return 0;
}