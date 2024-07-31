#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln44
{

	string  RemovePunctuationsFromString(string S1)
	{
		string str = "";
		for (short i = 0; i < S1.length(); i++)
		{
			if (!ispunct(S1[i]))
				str += S1[i];
		}
		return str;
	}


}
void RemovePunctuationsFromStringEX() {
	string S1 = "Welcome to Egypt, Egypt is a nice country; it's amazing.";
	cout << "Original String:\n" << S1;
	cout << "\n\nPauncuations Removed:\n" << soln44::RemovePunctuationsFromString(S1);

}


