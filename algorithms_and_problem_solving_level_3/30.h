#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln30
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
	int CountLetterInString(string text, char Ch1) {
		int Conter = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] == Ch1)Conter++;
		}
		return Conter;
	}


}

//

void CountLetterInStringEX() {
	string S1 = soln30::ReadString("Enter your Text?\n");
	char Ch1 = soln30::ReadChar("Enter Your Character: ");
	cout << "\nLetter \'" << Ch1 << "\' Count = " << soln30::CountLetterInString(S1, Ch1);
}

