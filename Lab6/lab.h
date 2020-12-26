#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>

using namespace std;
void DoTask1();
void DoTask2();
void DoTask3();
void DoTask4();
void DoTask5();
void DoTask6();

void printVector(const vector<int>& m);
void printVector(const vector<string>& m);

//Task1
vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el);
//Task2
vector<int>::iterator FindInSorted(vector<int>::iterator first, vector<int>::iterator last, int el);
//Task3
int WordsCounter(const string& str);
//Task4
map<string, int> WordsMapCounter(const string& str);
void InsertWord(map<string, int>& wordMap, string word);
void PrintMap(map<string, int> wordMap);
//Task5
vector<string> UniqueWords(const string& str);
//Task6
int UniqueWordsCount(const string& str);