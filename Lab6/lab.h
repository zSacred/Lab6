#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;
void DoTask1();
void DoTask2();
void DoTask3();
void DoTask4();
void printVector(const vector<int>& m);

//Lab1
vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el);
//Lab2
vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el);
//Lab3
int wordsCounter(const string& str);
//Lab4
map<string, int> wordsMapCounter(const string& str);
void InsertWord(map<string, int>& wordMap, string word);
void PrintMap(map<string, int> wordMap);
