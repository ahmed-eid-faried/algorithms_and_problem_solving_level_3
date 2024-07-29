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
	string LowerAllString(string text) {
 		for (int i = 0; i < text.length(); i++)
		{
 				text[i] = tolower(text[i]);
		 
 		}
		cout << endl;
		return text;

	}
	string UpperAllString(string text) {
		for (int i = 0; i < text.length(); i++)
		{
			text[i] = toupper(text[i]);

		}
		cout << endl;
		return text;

	}
}

//

void UpperAndLowerAllStringEx() {
	string S1 = soln25::ReadString("Please Enter Text?\n");
	cout << "\nString after LowerAllString:\n";
	S1 = soln25::LowerAllString(S1);
	cout << S1 << endl;
	cout << "\nString after UpperAllString:\n";
	S1 = soln25::UpperAllString(S1);
	cout << S1 << endl;
}


