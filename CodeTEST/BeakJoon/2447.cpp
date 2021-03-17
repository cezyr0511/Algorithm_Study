
#include <iostream>

using namespace std;

char mat[3000][3000];

void star(int n, int x, int y)
{
	if (n == 1)
	{
		mat[x][y] = '*';
		return;
	}

	int div = n / 3;

	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			if (i == 1 && j == 1)
			{
				continue;
			}
			star(div, x + (div * i), y + (div * j));
		}
	}

	return;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < 3000; i++)
	{
		for (int j = 0; j < 3000; j++)
		{
			mat[i][j] = ' ';
		}
	}

	star(n, 0, 0);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mat[i][j];
		}

		cout << endl;
	}

	return 0;
}