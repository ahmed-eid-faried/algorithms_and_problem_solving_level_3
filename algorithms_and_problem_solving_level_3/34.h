#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln34
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
				cout  << setw(3) << text[i];
			}
		}
 	}


}

//

void PrintVowelsEx() {
	string S1 = soln34::ReadString("enter text? \n ");
	soln34::PrintVowels(S1);
}


