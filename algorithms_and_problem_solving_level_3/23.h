#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln23
{
	string ReadString(string Message) {
		string text;
		cout << Message;
		getline(cin, text);
		return text;
	}
	void PrintFirstLetterOfEachWord(string text) {
		bool IsAfterSpace = false;
		for (int i = 0; i < text.length(); i++)
		{
			if (text[i] == ' ') {
				IsAfterSpace = true;
			}
			else if ((text[i] != ' ' && IsAfterSpace) || (text[i] != ' ' && i == 0))
			{
				cout << text[i] << endl;
				IsAfterSpace = false;

			}
			else {
				IsAfterSpace = false;

			}

		}
		cout << endl;

	}




}

//

void  FirstLetterOfEachWord() {
	 
	soln23::PrintFirstLetterOfEachWord(soln23::ReadString("Please Enter Text?\n"));
}


