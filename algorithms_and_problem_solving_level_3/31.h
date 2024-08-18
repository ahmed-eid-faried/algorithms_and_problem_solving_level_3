#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln31
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


}

//

void CountLetterOrInvertLetterInStringEX() {
	string S1 = soln31::ReadString("enter text?\n");
	char Ch1 = soln31::ReadChar("enter letter: ");
	cout << "\nLetter \'" << Ch1 << "\' Count = " << soln31::CountLetter(S1, Ch1);
	cout << "\nLetter \'" << Ch1 << "\' ";     cout << "Or \'" << soln31::InvertLetterCase(Ch1) << "\' ";
	cout << " Count = " << soln31::CountLetter(S1, Ch1, false);
}

