// Lab6.cpp: ���������� ����� ����� ��� ����������� ����������.
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

    return 0;
}

void printVector(const std::vector<int>& m)
{
	for (const auto& e : m)
		cout << e << ", ";
	cout << endl;
}