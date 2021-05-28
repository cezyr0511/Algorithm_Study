#include <iostream>
#include <cmath>
using namespace std;

void hanoi(int n, int start, int to, int bypass)
{
    if (n == 1)
        printf("%d %d\n", start, to);
    else
    {
        hanoi(n - 1, start, bypass, to);

        printf("%d %d\n", start, to);

        hanoi(n - 1, bypass, to, start);
    }
}

int main() 
{
    int num;
    int T;

    cin >> num;

    T = pow(2, num) - 1;

    cout << T << endl;

    hanoi(num, 1, 3, 2);

	return 0;
}


