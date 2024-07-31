#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln35
{

	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}

	bool IsVowel(char Ch1) {
		char VowelLetters[5] = { 'a','e','i','o','u' };

		for (int i = 0; i < 5; i++)
		{
			if (VowelLetters[i] == tolower(Ch1))return true;
		}
		return false;
	}
	void PrintVowels(string text) {
		for (int i = 0; i < text.length(); i++)
		{
			if (IsVowel(text[i])) {
				cout << setw(3) << text[i];
			}
		}
	}

	void PrintEachWordInString(string S1) {
		string delim = " ";
		int position = 0;
		string subWord = "";
		while ((position = S1.find(delim)) != string::npos)
		{
			subWord = S1.substr(0, position);
			if (subWord != "")cout << subWord << endl;
			S1.erase(0, position + delim.length());
		}
		//last word in string
		if (S1 != "")cout << S1 << endl;
	}
}

//

void PrintEachWordInStringEX() {
	string S1 = soln35::ReadString("enter text? \n ");
	soln35::PrintEachWordInString(S1);
}


