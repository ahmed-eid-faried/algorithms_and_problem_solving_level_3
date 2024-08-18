#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln39
{

	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}



	string  JoinString(vector<string> listWords, string delim = " ") {


		string S1 = "";
		for (int i = 0; i < listWords.size(); i++)
		{
			S1 += listWords[i];
			if (i < listWords.size() - 1)			S1 += delim;
		}
		return S1;
	}
	void PrintVectorString(vector<string> listWords) {
		cout << "listWords (vector) ==>> " << "[ ";
		for (int i = 0; i < listWords.size(); i++)
		{
			cout << listWords[i] << " ";
		}
		cout << ']' << endl;
	}
}

//

void JoinStringEX() {
	vector<string> listWords = { "ahmed","eid","faried","mady" };
	soln39::PrintVectorString(listWords);
	string  S1 = soln39::JoinString(listWords, " ");
	cout << "====>>>> " << S1 << endl;
	cout << "==========================================================\n";
	string  S2 = soln39::JoinString(listWords, ",");
	cout << "====>>>> " << S2 << endl;

}


