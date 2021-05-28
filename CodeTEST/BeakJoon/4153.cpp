#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int input;

	vector<int> vec;

	while (true)
	{
		for (int i = 0; i <= 2; i++)
		{
			cin >> input;

			vec.push_back(input);
		}

		sort(vec.begin(), vec.end());		

		if (vec[0] == 0 && vec[1] == 0 && vec[2] == 0)
		{
			break;
		}

		if (pow(vec[0], 2) + pow(vec[1], 2) != pow(vec[2], 2))
		{
			cout << "wrong" << endl;
		}
		else
		{
			cout << "right" << endl;
		}

		vec.clear();
		
	}

	return 0;
}