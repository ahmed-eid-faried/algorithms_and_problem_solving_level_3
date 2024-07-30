#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln32
{
	char ReadChar(string Message) {
		char Char;
		cout << Message;
		cin >> Char;
		return Char;
	}
	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}
	char InvertLetterCase(char Char) {
		Char = islower(Char) ? toupper(Char) : tolower(Char);
		//Char = (Char > char(90)) ? toupper(Char) : tolower(Char);
		return Char;

	}
	int CountLetter(string text, char Ch1, bool IsMatchCase = true) {
		int Conter = 0;
		char InvertLetter = InvertLetterCase(Ch1);
		for (int i = 0; i < text.length(); i++)
		{
			if (
				IsMatchCase ? (text[i] == Ch1) :
				(text[i] == Ch1 || text[i] == InvertLetter)
				)Conter++;

			/*	if (
					IsMatchCase ? (text[i] == Ch1) :
					(tolower(text[i]) == tolower(Ch1))
					)Conter++;*/
		}
		return Conter;
	}
	bool IsVowel(char Ch1) {
		char VowelLetters[5] = { 'a','e','i','o','u' };

		for (int i = 0; i < 5; i++)
		{
			if (VowelLetters[i] == tolower(Ch1))return true;
		}
		return false;
	}

}

//

void IsVowelCharEx() {
	char Ch1 = soln32::ReadChar("enter letter: ");
	if (soln32::IsVowel(Ch1))
		cout << "\nYES Letter \'" << Ch1 << "\' is vowel";
	else
		cout << "\nNO Letter \'" << Ch1 << "\' is NOT vowel";
}

