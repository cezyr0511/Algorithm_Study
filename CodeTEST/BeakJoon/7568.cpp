#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

typedef pair<char, int> p;

bool cmp(const p& a, const p& b)
{
	if (a.second == b.second) 
		return a.first < b.first;

	return a.second > b.second;
}

int main()
{
	int n;

	int Weight = 0, Height = 0;

	map<char, int> Weightdata;
	map<char, int> Heightdata;
	map<char, int> Rankdata;

	int Arr[50];

	fill_n(Arr, 50, 1);

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> Weight >> Height;
		
		Weightdata.insert({ (char)(i + 65), Weight });
		Heightdata.insert({ (char)(i + 65), Height });
		Rankdata.insert({ (char)(i + 65), 0 });		
	}

	vector<p> WeightVec(Weightdata.begin(), Weightdata.end());
	vector<p> HeightVec(Heightdata.begin(), Heightdata.end());

	sort(WeightVec.begin(), WeightVec.end(), cmp);
	sort(HeightVec.begin(), HeightVec.end(), cmp);	

	int Rank = n;

	for (p H : HeightVec)
	{
		for (p R : Rankdata)
		{
			if (R.first == H.first && R.second != H.second)
			{
				Rankdata[R.first] = Rank;

				Rank--;
			}
		}
	}

	Rank = n;

	for (p W : WeightVec)
	{
		for (p R : Rankdata)
		{
			if (R.first == W.first && R.second != W.second)
			{
				Rankdata[R.first] += Rank;

				Rank--;
			}
		}
	}
	
	int i = 0;

	for (p a : Rankdata)
	{
		for (p b : Rankdata)
		{
			if (a.second < b.second)
			{
				Arr[i] ++;
			}
		}

		i++;
	}

	for (p a : WeightVec)
	{
		cout << a.first << ":" << a.second << " ";
	}

	cout << endl;

	for (p a : HeightVec)
	{
		cout << a.first << ":" << a.second << " ";
	}

	cout << endl;

	for (int i = 0; i < n; i++)
	{
		cout << Arr[i] << " ";
	}

	return 0;
}