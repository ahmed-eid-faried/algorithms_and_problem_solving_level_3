#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln46
{
	double ReadDoubleNumber(string Message) {
		double Num;
		cout << Message;
		cin >> Num;
		return Num;
	}
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
	}	struct Client {
		string AccountNumber;
		string PinCode;
		string	Name;
		string Phone;
		double	AccountBalance;
	};
	void PrintClient(Client client) {
		cout << "YOUR AccountNumber: " << client.AccountNumber << endl;
		cout << "YOUR PinCode: " << client.PinCode << endl;
		cout << "YOUR Name: " << client.Name << endl;
		cout << "YOUR Phone: " << client.Phone << endl;
		cout << "YOUR AccountBalance: " << client.AccountBalance << endl;
	};
	Client ConvertLineToRecord(string strClientRecord, string Seperator = "#%&#") {
		vector<string> sListOfRecord = SplitString(strClientRecord, Seperator);
		Client Client;
		Client.AccountNumber = sListOfRecord[0];
		Client.PinCode = sListOfRecord[1];
		Client.Name = sListOfRecord[2];
		Client.Phone = sListOfRecord[3];
		Client.AccountBalance = stod(sListOfRecord[4]);
		return Client;
	}



}
void ConvertLineToRecordStringEX() {
	cout << "\n\nClient Record for Saving is: \n";
	string S1 = "A323#%&#13420#%&#AHMED mady#%&#03813813#%&#334.990000#%&#";
	cout << "\nLine Record is:\n";
	soln46::Client Client;
	Client = soln46::ConvertLineToRecord(S1);
	soln46::PrintClient(Client);
 

}


