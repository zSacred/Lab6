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
	//DoTask4();
	//DoTask5();
	//DoTask6();
	//DoTask7();
	//DoTask8();
	DoTask9();

	system("pause");

    return 0;
}

void PrintVector(const vector<int>& m)
{
	for (const auto& e : m)
		cout << e << ", ";
	cout << endl;
}

void PrintVector(const vector<string>& m)
{
	for (const auto& e : m)
		cout << e << ", ";
	
	cout << endl;
}

void PrintList(const list<int>& m)
{
	for (const auto& e : m)
		cout << e << ", ";

	cout << endl;
}