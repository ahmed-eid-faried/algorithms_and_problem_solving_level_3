#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln43
{
	vector<string> SplitString(string S1, string delim = " ") {

		int position = 0;
		string subWord = "";
		int counter = 0;
		vector<string> listWords;
		while ((position = S1.find(delim)) != string::npos)
		{
			subWord = S1.substr(0, position);
			if (subWord != "") listWords.push_back(subWord);
			S1.erase(0, position + delim.length());
		}
		//last word in string
		if (S1 != "")listWords.push_back(S1);
		return listWords;
	}
	string  JoinString(vector<string> listWords, string delim = " ") {
		string S1 = "";
		for (string i : listWords)
		{
			S1 += i + delim;
		}
		return S1.substr(0, S1.length() - (delim.length()));
	}
	string ReplaceString(string S1, int position, int  length, string ReplaceTo) {
		int indexOfReplaceTo = 0;
		for (int i = position; i <= length + position; i++)
		{
			S1[i] = ReplaceTo[indexOfReplaceTo];
			indexOfReplaceTo++;
		}

		return S1;
	}
	string  LowerAllString(string S1)
	{
		for (short i = 0; i < S1.length(); i++)
		{
			S1[i] = tolower(S1[i]);
		}
		return S1;
	}
	string ReplaceWordInStringUsingSplit(string S1, string  StringToReplace, string ReplaceTo) {
		vector<string>vString = SplitString(S1, StringToReplace);
		S1 = JoinString(vString, ReplaceTo);

		return S1;
	}
	string ReplaceWordInStringUsingSplit(string S1, string  StringToReplace, string ReplaceTo, bool IsMatchedCase) {
		vector<string>vString = SplitString(S1, " ");
		for (string& S : vString)
		{
			if (IsMatchedCase) {
				if (S == StringToReplace)S = ReplaceTo;
			}
			else {
				if (LowerAllString(S) == LowerAllString(StringToReplace))S = ReplaceTo;

			}
		}






		S1 = JoinString(vString, " ");
		return S1;
	}

}

//

void ReplaceWordInStringUsingSplitEX() {
	string S1 = "Welcome to Egypt , egypt is a nice country";
	string StringToReplace = "Egypt"; string ReplaceTo = "USA";
	cout << "\nOriginal String:\n" << S1;
	cout << "\n\nReplace with match case: ";
	cout << "\n" << soln43::ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo);
	cout << "\n\nReplace with dont match case: ";
	cout << "\n" << soln43::ReplaceWordInStringUsingSplit(S1, StringToReplace, ReplaceTo, false);

}


