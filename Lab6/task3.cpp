#include "stdafx.h"
#include "lab.h"

int WordsCounter(const string& str)
{
	int counter = 0;

	string thisStr = str;

	char temp[4] = ",. ";

	int pos = 0;

	while (thisStr.size() > 0)
	{
		pos = thisStr.find_first_not_of(temp, 0);
		if (pos == -1)
			break;
		thisStr.erase(0, pos); //убрали мусор в начале строки

		pos = thisStr.find_first_of(temp, 0); //нашли конец слова

		string word = thisStr.substr(0, pos);
		counter++; //посчитали слово

		//cout << "got word : " << word << endl;

		thisStr.erase(0, pos); //убрали слово из строки
	}
	

	return counter;
}

void DoTask3()
{
	//string str(".This is,testing sample,of.string"); //6 words
	//string str(".This  is.,testing sample,,,of. string"); //6 words
	string str(".This  is.,testing sample,,,of. string...yep,yep  it.is..,,."); //10 words
	cout << "Task 3"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	cout << "There is " << WordsCounter(str) << " of words in this sentence\n";
}