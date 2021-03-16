#include <iostream>

using namespace std;

int main()
{

	int input = 0;

	int count = 0;

	cin >> input;

	while (true)
	{
		if (input % 5 == 0)
		{
			cout << input / 5 + count << endl;
			break;
		}
		else if (input <= 0)
		{
			cout << "-1" << endl;
			break;
		}

		input = input - 3;

		count++;
	}


	return 0;
}
