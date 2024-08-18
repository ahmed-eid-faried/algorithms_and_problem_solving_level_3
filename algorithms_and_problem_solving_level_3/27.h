#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;

namespace soln27
{
	char ReadChar(string Message) {
		char Char;
		cout << Message;
		cin >> Char;
		return Char;
	}
	char InvertLetterCase(char Char) {
		Char = islower(Char) ? toupper(Char) : tolower(Char);
		//Char = (Char > char(90)) ? toupper(Char) : tolower(Char);
 		return Char;
	}

}

//

void InvertLetterCaseEX() {
	char S1 = soln27::ReadChar("Please Enter Text?\n");
	cout << "\nString after InvertLetterCase:\n";
	S1 = soln27::InvertLetterCase(S1);
	cout << S1 << endl;
}


