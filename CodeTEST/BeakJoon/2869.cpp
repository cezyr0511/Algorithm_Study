
#include <iostream>

using namespace std;

//�� ���� V
// ���� A���� ��
// �㿡 B���� �ٿ�
// ��ĥ�� Day


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