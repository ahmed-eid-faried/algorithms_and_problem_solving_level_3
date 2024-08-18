#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln37
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
	void PrintVectorString(vector<string> listWords) {
		for (int i = 0; i < listWords.size(); i++)
		{
			cout << listWords[i] << endl;
		}
	}




}

//

void SplitStringEX() {
	string S1 = soln37::ReadString("ENTER YOUR TEXT?\n");
 	vector<string> listWords=soln37::SplitString(S1, " ");
	cout << "Tokens: " << listWords.size() << endl;
	soln37::PrintVectorString(listWords);
	cout << "==========================================================\n";
	string S2 = "ahmed,eid,mady";
 	vector<string> listWords2 = soln37::SplitString(S2, ",");
	cout << "Tokens: " << listWords2.size() << endl;
	soln37::PrintVectorString(listWords2);

 }


