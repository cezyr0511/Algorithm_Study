
#include <iostream>

using namespace std;

//ÃÑ ±æÀÌ V
// ³·¿¡ A¹ÌÅÍ ¾÷
// ¹ã¿¡ B¹ÌÅÍ ´Ù¿î
// ¸çÄ¥Àº Day


int main()
{
	int V,A,B;

	int Day = 0;

	cin >> A >> B >> V;
	
	if ((V - A) % (A - B) == 0)
		Day = (V - A) / (A - B);
	else
		Day = (V - A) / (A - B) + 1;

	cout << Day + 1 << endl;

	return 0;
}