#include <iostream>
using namespace std;

int main()
{
	int N;

	cin >> N;

	if (N == 1)
	{
		return 0;
	}

	int Temp = 2;

	while (true)
	{
		if (N % Temp == 0)
		{
			cout << Temp << endl;

			N /= Temp;

			if (N == 1)
			{
				break;
			}

			Temp = 2;
		}
		else
		{
			Temp++;
		}

	}


	return 0;

}