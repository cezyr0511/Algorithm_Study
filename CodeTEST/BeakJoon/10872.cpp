#include <iostream>

using namespace std;

int Result = 1;

void Self(int n)
{
	if (n <= 0 || n > 12)
		return;


	Result *= n;

	Self(n - 1);

}

int main()
{
	int n;

	cin >> n;

	Self(n);

	cout << Result << endl;

	return 0;
}

