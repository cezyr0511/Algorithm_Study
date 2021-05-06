#include <iostream>

using namespace std;

// 0 3
// 1  2  1
// 1 5


int main()
{
	int T, X, Y;	

	cin >> T;

	int* Arry = new int[T];		

	for (int i = 0; i < T; i++)
	{
		cin >> X;
		cin >> Y;

		if (X == 0)
		{
			Arry[i] = Y;
		}
		else
		{
			Arry[i] = Y - X - 1;
		}

		//cout << Arry[i] << endl;
		
	}

	for (int i = 0; i < T; i++)
	{
		cout << Arry[i] << endl;
	}

	delete[] Arry;

	return 0;
}