#include <iostream>
#include <vector>

using namespace std;

typedef pair<int, int> p;

int main()
{
	int num;

	int Rank = 1;

	p Arr[50];	

	cin >> num;

	vector<int> Rankvec;

	for (int i = 0; i < num; i++)
	{
		cin >> Arr[i].first >> Arr[i].second;
	}

	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++)
		{
			if (Arr[i].first < Arr[j].first && Arr[i].second < Arr[j].second)
			{
				Rank++;
			}
		}

		Rankvec.push_back(Rank);

		Rank = 1;
	}

	for (auto a : Rankvec)
	{
		cout << a << " ";
	}

	return 0;
}