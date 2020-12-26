#include "stdafx.h"
#include "lab.h"


int DiffWordsCounter(const string& str)
{
	int counter;

	set<string> uniqueWords;

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

		//cout << "got word : " << word << endl;

		uniqueWords.insert(word);		//добавить слово в set
		thisStr.erase(0, pos); //удалить слово из строки

	}
	
	counter = uniqueWords.size();


	return counter;
}


void DoTask6()
{
	string str(".This  is.,testing sample,,, of. string...yep,yep  it.is..,,."); //10 words, 8 unique words


	cout << "Task 6"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	int uniqueWordsCounter = DiffWordsCounter(str);
	cout << "Unique words count: " << uniqueWordsCounter << endl;
	return;
}