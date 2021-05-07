#include <iostream>

using namespace std;

int main()
{
	int n;	
	int Sum = 0;
	int Temp = 0;
	bool Decimal = true;

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
		else if (A[i] != 1)
		{
			Temp = A[i];

			for (int j = 2; j < A[i]; j++)
			{
				if (A[i] % j == 0)
				{
					Decimal = false;
				}
			}		

			if (Decimal)
			{
				Sum++;
			}
			else
			{
				Decimal = true;
			}
			
		}

		
		
	}
	
	cout << Sum << endl;

	delete[] A;

	return 0;
}