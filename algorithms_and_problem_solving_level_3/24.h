#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln24
{
	string ReadString(string Message) {
		string text;
		cout << Message;
		getline(cin, text);
		return text;
	}
	string UpperFirstLetterOfEachWord(string text) {
		bool IsAfterSpace = false;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] == ' ') {
				IsAfterSpace = true;
			}
			else if ((text[i] != ' ' && IsAfterSpace) || (text[i] != ' ' && i == 0))
			{
				//cout << text[i] << endl;
				//text[i] = text[i] - char(32);
				text[i] =toupper(text[i]);
				IsAfterSpace = false;

			}
			else {
				IsAfterSpace = false;

			}

		}
		cout << endl;
		return text;

	}
}

//

void  UpperFirstLetterOfEachWordEx() {
	string S1 = soln24::ReadString("Please Enter Text?\n");
	cout << "\nString after conversion:\n";
	S1 = soln24::UpperFirstLetterOfEachWord(S1);
	cout << S1 << endl;
}


