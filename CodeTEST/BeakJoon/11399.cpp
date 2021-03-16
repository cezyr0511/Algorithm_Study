#include <iostream>

using namespace std;

int main()
{
	int n = 0;

	cin >> n;

	int iArry[1000] = {};

	for (int i = 1; i <= n; i++)
	{
		cin >> iArry[i];
	}

	int temp = 0;

	for (int j = 1; j <= n; j++)
	{
		for (int k = 1; k < j; k++)
		{
			if (iArry[j] < iArry[k])
			{
				temp = iArry[j];
				iArry[j] = iArry[k];
				iArry[k] = temp;
			}

		}
	}

	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			sum += iArry[j];
		}
	}

	cout << sum << endl;

	return 0;
}
