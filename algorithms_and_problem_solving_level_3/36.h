#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln36
{

	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}



	int CountWords(string S1) {
		string delim = " ";
		int position = 0;
		string subWord = "";
		int counter = 0;
		while ((position = S1.find(delim)) != string::npos)
		{
			subWord = S1.substr(0, position);
			if (subWord != "")counter++;
			S1.erase(0, position + delim.length());
		}
		//last word in string
		if (S1 != "")counter++;
		return counter;
	}
}

//

void CountWordsInStringEX() {
	string S1 = soln36::ReadString("ENTER YOUR TEXT?\n");
	cout << "\nThe number of words in your string is: ";
	cout << soln36::CountWords(S1) << endl;
}


