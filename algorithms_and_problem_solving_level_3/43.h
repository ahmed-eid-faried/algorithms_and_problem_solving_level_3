#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln43
{
	string ReplaceString(string S1, int position, int  length, string ReplaceTo) {
		int indexOfReplaceTo = 0;
		for (int i = position; i <= length + position; i++)
		{
			S1[i] = ReplaceTo[indexOfReplaceTo];
			indexOfReplaceTo++;
		}

		return S1;
	}
	string ReplaceWordInStringUsingSplit(string S1, string  StringToReplace, string ReplaceTo, bool IsMatchedCase = true) {
		int position = S1.find(StringToReplace);
		int counter = 0;
		while (position != string::npos)
		{
			S1 = ReplaceString(S1,position, StringToReplace.length(), ReplaceTo);				
				//S1.replace(position, StringToReplace.length(), ReplaceTo);
			position = S1.find(StringToReplace);
		}
		return S1;
	}

}

//

void ReplaceWordInStringUsingSplitEX() {



	string S1 = "Welcome to Jordan , Jordan is a nice country";
	string StringToReplace = "jordan"; string ReplaceTo = "USA";
	cout << "\nOriginal String:\n" << S1;
	cout << "\n\nReplace with match case: ";
	cout << "\n" << soln43::ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << soln43::ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);

}


