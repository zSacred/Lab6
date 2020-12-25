#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;
void DoTask1();
void DoTask2();
void printVector(const std::vector<int>& m);


vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el);
vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el);