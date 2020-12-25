#include "stdafx.h"
#include "lab.h"

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el)
{
	vector<int>::iterator it = first;

	
	int thisEl = 0;

	while (it != last)
	{
		thisEl = *it;
		if (thisEl == el)
		{
			return it;
		}
		
		++it;
	}
	--it;
	
	return it;
}


void DoTask1()
{
	std::vector<int> thisVector = { 2,5,8,7,9,6,4,3 };

	int el;

	cout << "Task1.....\n";
	cout << "Have vector: \n";
	printVector(thisVector);
	cout << "Input element to find: \n";
	cin >> el;

	cout << "Finding element...\n";
	vector<int>::iterator iterator = Find(thisVector.begin(), thisVector.end(), el);

	cout << "Found element: " << *iterator << "\n";
}