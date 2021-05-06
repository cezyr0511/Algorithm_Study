#include <iostream>
using namespace std;

int main()
{
	int map[19][19];

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			map[i][j] = 0;
		}
	}

	int n, x, y;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		cin >> x >> y;

		map[x-1][y-1] = 1;
 	}

	for (int i = 0; i < 19; i++)
	{
		for (int j = 0; j < 19; j++)
		{
			cout << map[i][j] << " ";
		}

		cout << endl;
	}

	return 0;
}