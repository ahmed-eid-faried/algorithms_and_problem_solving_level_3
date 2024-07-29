#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln25
{
	string ReadString(string Message) {
		string text;
		cout << Message;
		getline(cin, text);
		return text;
	}
	string LowerFirstLetterOfEachWord(string text) {
		bool IsAfterSpace = true;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] != ' ' && IsAfterSpace) {
				text[i] = tolower(text[i]);
			}
			IsAfterSpace = (text[i] == ' ');
		}
		cout << endl;
		return text;

	}
}

//

void  LowerFirstLetterOfEachWordEx() {
	string S1 = soln25::ReadString("Please Enter Text?\n");
	cout << "\nString after conversion:\n";
	S1 = soln25::LowerFirstLetterOfEachWord(S1);
	cout << S1 << endl;
}


