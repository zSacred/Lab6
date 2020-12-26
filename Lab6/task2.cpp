#include "stdafx.h"
#include "lab.h"

vector<int>::iterator FindInSorted(vector<int>::iterator first, vector<int>::iterator last, int el)
{
	//vector<int>::iterator search;
	if (first == last)
		return last;

	std::vector<int>::iterator middle = first + (last - first) / 2;

	if (el == *middle)
		return middle;

	if (*middle < el && middle + 1 != last)
		return FindInSorted(middle, last, el);
	if (*middle > el)
		return FindInSorted(first, middle, el);
	
	
	return last;

}


void DoTask2()
{
	
	//vector<int> thisVector = {1, 2, 3, 5, 10, 15, 17, 18 };
	vector<int> thisVector = { 1, 2, 3, 5, 10, 15, 17 };
	int el;

	cout << "Task1.....\n";
	cout << "Have vector: \n";
	printVector(thisVector);
	cout << "Input element to find: \n";
	cin >> el;
	
	
	cout << "Finding element...\n";
	vector<int>::iterator iterator = FindInSorted(thisVector.begin() , thisVector.end(), el);
	if (iterator != thisVector.end())
		cout << "Found element: " << *iterator << endl;
	else
		cout << "There is no such element\n";




}