#include <iostream>

using namespace std;

int main()
{
	int n = 0, k = 0, d = 0;
	int a[11] = { 0 };
	int coin = 0;

	cin >> n >> k;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	for (int j = n; j >= 1; j--)
	{
		d = k / a[j];

		coin += d;

		k -= a[j] * d;
	}

	cout << coin << endl;

	return 0;
}
