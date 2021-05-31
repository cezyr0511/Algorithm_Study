#include <iostream>

using namespace std;

/*
 100, 100 + 1 + 0 + 0 = 101
 101
*/

int main()
{
	int Num = 1;

	int InputNum;

	int Sum = 0, Temp = 0;

	bool Check = false;

	cin >> InputNum;

	for (int i = 1; i < InputNum; i++)
	{
		Sum = i;
		Temp = i;

		while (Temp)
		{
			Sum += Temp % 10;
			Temp /= 10;
		}

		if (Sum == InputNum)
		{
			cout << i << endl;
			Check = true;
			break;
		}

	}

	if (!Check)
	{
		cout << "0" << endl;
	}	

	return 0;
}