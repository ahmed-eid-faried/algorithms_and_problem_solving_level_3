#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln29
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
	int CountCapitalLetters(string text) {
		int Conter = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (isupper(text[i]))Conter++;
		}
		return Conter;
	}
	int CountSmallLetters(string text) {
		int Conter = 0;
		for (int i = 0; i < text.length(); i++)
		{
			if (islower(text[i]))Conter++;
		}
		return Conter;
	}
	int CountLetters(string text, enWhatToCount WhatToCount = enWhatToCount::none) {
		switch (WhatToCount)
		{
		case enWhatToCount::none:
			return text.length();
		case enWhatToCount::CapitalLetters:
			return CountCapitalLetters(text);
		case enWhatToCount::SmallLetters:
			return CountSmallLetters(text);

		default:
			return 0;
		}
	}
	enum enWhatToCount { none, CapitalLetters, SmallLetters };
}

//

void InvertAllStringLettersCaseEX() {
	string S1 = soln29::ReadString("ENTER YOUR TEXT? \n");
	cout << "\nString Length = " << S1.length();
	cout << "\nCapital Letters Count= " << soln29::CountCapitalLetters(S1);
	cout << "\nSmall Letters Count= " << soln29::CountSmallLetters(S1);
	cout << "\n\nMethod 2\n";     cout << "\nString Length = " << soln29::CountLetters(S1);
	cout << "\nCapital Letters Count= " << soln29::CountLetters(S1, soln29::enWhatToCount::CapitalLetters);
	cout << "\nSmall Letters Count= " << soln29::CountLetters(S1, soln29::enWhatToCount::SmallLetters);
}

