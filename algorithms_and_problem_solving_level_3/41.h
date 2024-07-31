#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln41
{

	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}



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
	string  ReverseJoinString(vector<string> listWords, string delim = " ") {
		string S1 = "";
		vector<string> ::iterator iter = listWords.end();
		while (iter != listWords.begin())
		{
			--iter;
			S1 += *iter + delim;
		}
		return S1.substr(0, S1.length() - (delim.length()));
	}

	string ReverseWordsString(string S1, string delim = " ") {
		return ReverseJoinString(SplitString(S1, delim));
	}
	void PrintReverseVectorString(vector<string> listWords) {
		cout << " ===>>> ";
		for (int i = listWords.size() - 1; i >= 0; i--)
		{
			cout << listWords[i] << " ";
		}
		cout << endl;

	}
}

//

void ReverseWordsStringEX() {
	string S1 = soln41::ReadString("ENTER YOUR TEXT?\n");
	vector<string> listWords = soln41::SplitString(S1, " ");
	soln41::PrintReverseVectorString(listWords);
	cout << "==========================================================\n";
	string S2 = "ahmed,eid,mady";
	cout << " ===>>> " << soln41::ReverseWordsString(S2, ",") << endl;

}


