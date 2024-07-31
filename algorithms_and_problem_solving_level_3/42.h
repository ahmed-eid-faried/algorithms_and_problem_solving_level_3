#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln42
{
	string ReplaceWordInStringUsingBuiltInFunction(string S1, string  StringToReplace, string ReplaceTo) {
		int position = S1.find(StringToReplace);
		int counter = 0;
		while (position != string::npos)
		{
			S1 = S1.replace(position, StringToReplace.length(), ReplaceTo);
			position = S1.find(StringToReplace);
		}
		return S1;
	}

}

//

void ReplaceWordInStringUsingBuiltInFunctionEX() {
 


	string S1 = "Welcome to USA , USA is a nice country";
	string StringToReplace = "USA"; string ReplaceTo = "EGYPT";
	cout << "\nOrigial String\n" << S1;
	cout << "\n\nString After Replace:";
	cout << "\n" << soln42::ReplaceWordInStringUsingBuiltInFunction(S1, StringToReplace, ReplaceTo);

}


