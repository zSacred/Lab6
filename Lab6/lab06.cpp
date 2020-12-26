// Lab6.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <iostream>
#include <vector>
#include "lab.h"

using namespace std;



int main()
{
	DoTask1();
	system("pause");
	system("cls");

	DoTask2();
	system("pause");
	system("cls");

	DoTask3();
	system("pause");
	system("cls");

	DoTask4();
	system("pause");
	system("cls");

	DoTask5();
	system("pause");
	system("cls");

	DoTask6();
	system("pause");
	system("cls");

	DoTask7();
	system("pause");
	system("cls");
	
	DoTask8();
	system("pause");
	system("cls");

	DoTask9();
	system("pause");
	system("cls");
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