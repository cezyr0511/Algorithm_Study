#include <iostream>

using namespace std;

int main()
{
	int M, N;

	int Sum = 0;
	int Min = 0;
	bool Decimal = true;
	bool MinNum = true;

	cin >> M;
	cin	>> N;

	for (int i = M; i <= N; i++)
	{
		if (i == 2)
		{
			MinNum = false;
			Min = 2;
			Sum += i;
		}
		else if (i != 1)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					Decimal = false;
				}
			}

			if (Decimal)
			{
				if (MinNum)
				{
					Min = i;
					MinNum = false;
				}			
				
				//cout << i << " ";

				Sum += i;
			}
			else
			{
				Decimal = true;
			}
		}		
	}


	//cout << endl;
	////////////////////////////////////////
	if (Sum == 0)
	{
		cout << "-1";
	}
	else
	{
		cout << Sum << endl << Min;
	}
	
	return 0;
}