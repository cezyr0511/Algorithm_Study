#include <iostream>
#include <math.h>

using namespace std;

// 이동거리  작동 횟수
//  1			1
//  2			2
//  3			3
//  4			3
//	5			4
//	6			4
//	7			5
//	8			5
//	9			5
//	10			6


int main()
{
	int T;	

	cin >> T;	

	int* Re = new int[T];

	//0 1 2
	for (int i = 0; i < T; i++)
	{
		long long X, Y;
		long long move, max = 0;

		cin >> X >> Y;

		while (max * max <= Y - X)
		{
			max++;
		}
		
		max--;

		move = 2 * max - 1;

		long long rem = Y - X - max * max;

		rem = (long long)ceil((double)rem / (double)max);

		move += rem;
		
		Re[i] = move;		
	}

	for (int i = 0; i < T; i++)
	{
		cout << Re[i] << endl;
	}

	delete[] Re;

	return 0;
}