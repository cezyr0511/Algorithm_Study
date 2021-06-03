#include <iostream>
#include <string>

using namespace std;


int main()
{
	int N, M;

	string InputStr[50];

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> InputStr[i];
	}

	cout << endl;

	for (int i = 0; i < N; i++)
	{
		cout << InputStr[i] << endl;
	}

	return 0;
}