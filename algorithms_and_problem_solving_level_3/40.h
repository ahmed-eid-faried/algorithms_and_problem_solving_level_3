#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln40
{

	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}



	string  JoinString(vector<string> listWords, string delim = " ") {
		string S1 = "";
		for (string i : listWords)
		{
			S1 += i + delim;
		}
		return S1.substr(0, S1.length() - (delim.length()));
	}
	string  JoinString(string  listWords[100], short length, string delim = " ") {
		string S1 = "";
		for (int i = 0; i < length; i++)
		{
			S1 += listWords[i];
			if (i < length - 1)			S1 += delim;
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
	void PrintVectorString(string  listWords[100], short length) {
		cout << "listWords (vector) ==>> " << "[ ";
		for (int i = 0; i < length; i++)
		{
			cout << listWords[i] << " ";
		}
		cout << ']' << endl;
	}
}

//

void JoinStringArrayEX() {
	vector<string> listWords = { "ahmed","eid","faried","mady" };
	soln40::PrintVectorString(listWords);
	string  S1 = soln40::JoinString(listWords, " ");
	cout << "====>>>> " << S1 << endl;
	cout << "==========================================================\n";
	string  listWords2[100] = { "ahmed","eid","faried","mady" };
	soln40::PrintVectorString(listWords2, 4);
	string  S2 = soln40::JoinString(listWords2, 4, ",");
	cout << "====>>>> " << S2 << endl;

}


