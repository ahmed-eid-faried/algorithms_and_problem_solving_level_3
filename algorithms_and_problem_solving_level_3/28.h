#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln28
{
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
	string InvertAllStringLettersCase(string text) {
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = InvertLetterCase(text[i]);
			//text[i] = islower(text[i]) ? toupper(text[i]) : tolower(text[i]);
			//text[i] = (text[i] > char(90)) ? toupper(text[i]) : tolower(text[i]);

		}
 		return text;

	}

}

//

void InvertAllStringLettersCaseEX() {
	string S1 = soln28::ReadString("Please Enter Text?\n");
	cout << "\nString after InvertAllStringLettersCase:\n";
	S1 = soln28::InvertAllStringLettersCase(S1);
	cout << S1 << endl;
}


