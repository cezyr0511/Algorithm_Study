#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

const int MAX = 10000000;

int map[MAX + 1];

int main(void)
{
	int Min, Max;	

	cin >> Min >> Max;	

	for (int i = Min; i <= Max; i++)
	{
		map[i] = i;
	}

	map[1] = 0;	

	for (int i = 2; i <= sqrt(Max); i++)
	{
		for (int j = i + i; j <= Max; j += i)
		{
			map[j] = 0;
		}
	}

	for (int i = Min; i <= Max; i++)
	{
		if (map[i] != 0)
			printf("%d\n", i);
	}

	return 0;
}