
#include <iostream>

using namespace std;

#include "Stack.h"
#include "Queue.h"

int main()
{
	
	/*CStackList<int> intStack;

	for (int i = 0; i < 10; ++i)
	{
		intStack.push(i);
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << intStack.pop() << endl;
	}

	CStackList<char>	charStack;

	char	strText[10] = "TestStr";

	for (int i = 0; i < strlen(strText); i++)
	{
		charStack.push(strText[i]);
	}

	for (int i = 0; i < strlen(strText); i++)
	{
		cout << charStack.pop();
	}

	cout << endl;

	CStackArray<int>	intStackArr;	

	for (int i = 0; i < 10; ++i)
	{
		intStackArr.pust(i);
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << intStackArr.pop() << endl;
	}*/
	

	/*CQueueList<int>	intQueue;

	for (int i = 0; i < 10; i++)
	{
		intQueue.push(i);
	}

	for (int i = 0; i < 10; i++)
	{
		cout << intQueue.pop() << endl;
	}*/
	
	CCircleQueue<int, 10> circleQueue;

	for (int i = 0; i < 10; ++i)
	{
		circleQueue.push(i);
	}

	for (int i = 0; i < 5; ++i)
	{
		cout << circleQueue.pop() << endl;
	}

	for (int i = 0; i < 5; ++i)
	{
		circleQueue.push(i);
	}

	for (int i = 0; i < 10; ++i)
	{
		cout << circleQueue.pop() << endl;
	}

	return 0;
}