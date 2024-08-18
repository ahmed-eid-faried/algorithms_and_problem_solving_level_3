#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln38
{

	string ReadString(string Message) {
		string Text;
		cout << Message;
		getline(cin, Text);
		return Text;
	}
	string TrimLeft(string S1) {
		char delim = ' ';
		vector<string> listWords;
		for (int i = 0; i < S1.length(); i++)
		{
			if (delim != S1[i]) {
				S1.erase(0, i);
				return S1;
			}
		}
	}
	string TrimRight(string S1) {
		char delim = ' ';
		vector<string> listWords;
		for (int i = S1.length() - 1; i >= 0; i--)
		{
			if (delim != S1[i]) {
				S1.erase(i, S1.length());
				return S1;
			}
		}
	}
	string Trim(string S1) {
		return TrimRight(TrimLeft(S1));
	}
}

//

void TrimStringEX() {

	string S1 = "      Mohammed Abu-Hahdoud      ";
	cout << "\nString     \t= " << S1;
	cout << "\n\nTrim Left  \t= " << soln38::TrimLeft(S1);
	cout << "\nTrim Right \t= " << soln38::TrimRight(S1);
	cout << "\nTrim       \t= " << soln38::Trim(S1);

}


