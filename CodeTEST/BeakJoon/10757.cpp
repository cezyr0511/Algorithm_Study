#include <iostream>

using namespace std;


//�� ���� A�� B�� �Է¹��� ����, A+B�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
//9223372036854775807 9223372036854775808
//18446744073709551615

int main()
{	
	string A, B;

	cin >> A >> B;	

	string At, Bt = "";

	int Asize = A.length();
	int Bsize = B.length();

	//�ڸ��� �����ֱ�.

	if (Asize >= Bsize)
	{
		for (int i = 0; i < Asize - Bsize; i++)
		{
			B.insert(0, "0");
		}
	}
	else
	{
		for (int i = 0; i < Bsize - Asize; i++)
		{
			A.insert(0, "0");
		}
	}

	// ex) 1000000
	//     0000010
	//     1000010
	//  

	int Sum = 0;

	string Result = "";

	for (int i = Asize; i >= 0; i--)
	{
		Sum = (A[i] - '0') + (B[i] - '0');

		if (Sum >= 10)
		{		 
			Result += Sum;

			//cout << Result << endl;
		}		

	}

	cout << A + B << endl;

	return 0;
}