#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln33
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
	int CountVowels(string text) {
		int Conter = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (IsVowel(text[i]))Conter++;
		}
		return Conter;
	}


}

//

void CountVowelsEx() {
	string Ch1 = soln33::ReadString("enter letter: ");
	cout << "\nNumber of vowels is: " << soln33::CountVowels(Ch1);
}


