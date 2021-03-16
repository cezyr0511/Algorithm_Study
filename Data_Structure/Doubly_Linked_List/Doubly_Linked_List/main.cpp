
#include <iostream>

using namespace std;

#include "LinkedList.h"

int main()
{
	CLinkedList<int>	listInt;
	CLinkedList<float>	listFloat;

	for (int i = 0; i < 100; i++)
	{
		listInt.push_back(i);
	}

	cout << listInt.front() << endl;
	cout << listInt.back() << endl;

	listInt.pop_back();
	cout << listInt.back() << endl;

	listInt.pop_front();
	cout << listInt.front() << endl;

	return 0;
}