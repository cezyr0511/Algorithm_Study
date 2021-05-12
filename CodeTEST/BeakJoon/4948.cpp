#include <iostream>
#include <cmath>

using namespace std;

/*
1 ~ 2 = 1 [2]
10 ~ 20 = 4 [11 13 17 19]
13 ~ 26 = 3 [17 19 23]
100 ~ 200 = 
*/
const int MAX = 10000000;

int map[MAX + 1];

int main()
{
	int n;
	int Sum = 0;

	for (int i = 1; i <= MAX; i++)
	{
		map[i] = i;
	}

	map[1] = 0;

	while (true)
	{
		cin >> n;

		int Max = n * 2;

		if (n == 0)
			break;

		for (int i = 2; i <= sqrt(Max); i++)
		{
			for (int j = i + i; j <= Max; j += i)
			{
				map[j] = 0;
			}
		}

		for (int j = n + 1; j <= Max; j++)
		{
			if (map[j] != 0)
				Sum++;
		}		

		cout << Sum << endl;

		Sum = 0;

	}

	return 0;
}
