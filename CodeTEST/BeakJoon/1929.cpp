#include <iostream>
#include <vector>
using namespace std;

// 2 3 5 7

int main()
{
	int M, N;

	cin >> M >> N;	

	vector<int> T;

	int Index = 0;
	for (int i = M; i <= N; i++)
	{
		T.push_back(i);
	}	

	for (int i = 2; i <= sqrt(N); i++)
	{
		if (T[i] == 0)
			continue;
		
		for (int j = i * i; j <= N; j += i)
			T[j] = 0;
	}

	for (int i = 0; i < T.size(); i++)
	{
		if (T[i] != 0)
		{
			cout << T[i] << endl;
		}
		
	}

	return 0;

}