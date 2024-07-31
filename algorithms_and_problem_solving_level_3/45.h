#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln45
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
	string  JoinString(vector<string> listWords, string delim = " ") {
		string S1 = "";
		for (string i : listWords)
		{
			S1 += i + delim;
		}
		return S1.substr(0, S1.length() - (delim.length()));
	};
	struct Client {
		string AccountNumber;
		string PinCode;
		string	Name;
		string Phone;
		double	AccountBalance;
	};
	Client ReadNewClient() {
		Client client;
		client.AccountNumber = ReadString("ENTER YOUR AccountNumber: ");
		client.PinCode = ReadString("ENTER YOUR PinCode: ");
		client.Name = ReadString("ENTER YOUR Name: ");
		client.Phone = ReadString("ENTER YOUR Phone: ");
		client.AccountBalance = ReadDoubleNumber("ENTER YOUR AccountBalance: ");
		return client;
	};
	string ConvertRecordToLine(Client Client, string Seperator = "#%&#") {
		string strClientRecord = "";
		strClientRecord += Client.AccountNumber + Seperator;
		strClientRecord += Client.PinCode + Seperator;
		strClientRecord += Client.Name + Seperator;
		strClientRecord += Client.Phone + Seperator;
		strClientRecord += to_string(Client.AccountBalance);
		return strClientRecord;
	}



}
void ConvertRecordToLineStringEX() {
	cout << "\nPlease Enter Client Data: \n\n";
	soln45::Client Client;
	Client = soln45::ReadNewClient();
	cout << "\n\nClient Record for Saving is: \n";
	cout << soln45::ConvertRecordToLine(Client);


}


