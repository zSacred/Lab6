#pragma once
#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <list>

using namespace std;
void DoTask1();
void DoTask2();
void DoTask3();
void DoTask4();
void DoTask5();
void DoTask6();
void DoTask7();
void DoTask8();
void DoTask9();

void PrintVector(const vector<int>& m);
void PrintVector(const vector<string>& m);
void PrintList(const list<int> &m);

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
int DiffWordsCounter(const string& str);
//Task7
void ReverseNums(list<int>& nums);
//Task8
void PlusesDelete(vector<int>& nums);
bool IsPlus(const int& element);
//Task9
void Sort(const list<int>& nums);
//bool ToLower(const int& l, const int& r);