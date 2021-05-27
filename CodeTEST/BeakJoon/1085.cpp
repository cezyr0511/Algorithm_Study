#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int x, y, w, h;
	int Temp = 0;
	int Dest = 0;

	cin >> x >> y >> w >> h;

	Temp = min(x, y);
	Dest = min(w - x, h - y);

	cout << min(Temp, Dest) << endl;


	return 0;
}