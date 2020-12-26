// Lab6.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include "lab.h"

using namespace std;



int main()
{
	

	//DoTask1();
	//DoTask2();
	//DoTask3();
	DoTask4();
	system("pause");

    return 0;
}

void printVector(const std::vector<int>& m)
{
	for (const auto& e : m)
		cout << e << ", ";
	cout << endl;
}