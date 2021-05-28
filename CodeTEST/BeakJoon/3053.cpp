#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	const long double PI = 3.1415926535897932;

	long double R;

	cin >> R;

	cout << fixed;

	cout.precision(6);

	cout << powl(R, 2) * PI << endl;

	cout << powl(R, 2) * 2 << endl;

	return 0;
}