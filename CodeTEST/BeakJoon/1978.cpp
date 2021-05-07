#include <iostream>

using namespace std;

int main()
{
	int n;	
	int Sum = 0;

	cin >> n;

	int* A = new int[n];

	for (int i = 0; i < n ; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < n; i++)
	{
		if (A[i] == 2)
		{
			Sum++;
		}
		else if (A[i] != 1 && A[i] % 2 != 0)
		{
			Sum++;
		}
	}
	
	cout << Sum << endl;

	delete[] A;

	return 0;
}