#include "stdafx.h"
#include "lab.h"


vector<string> UniqueWords(const string& str)
{
	vector<string> wordsVector;
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

	for (const auto& it : uniqueWords)
	{
		wordsVector.push_back(it);
	}

	return wordsVector;
}

void DoTask5()
{
	string str(".This  is.,testing sample,,, of. string...yep,yep  it.is..,,."); //10 words, 8 unique words
	
	
	cout << "Task 5"
		<< endl
		<< "Testing sentence: "
		<< endl
		<< str
		<< endl;

	vector<string> wordsList = UniqueWords(str);
	cout << "Unique words vector: " << endl;

	printVector(wordsList);
	return;
}