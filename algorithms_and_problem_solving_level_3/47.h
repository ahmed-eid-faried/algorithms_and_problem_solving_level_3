#pragma once
#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <iomanip>
#include<fstream>
using namespace std;

namespace soln47
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
		// Usage of std::ws will extract allthe whitespace character
		getline(cin >> ws, Text);
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
	void AddDataToFile(string pathFile, string Data) {
		fstream MyFile;
		MyFile.open(pathFile, ios::out | ios::app);
		if (MyFile.is_open()) {
			MyFile << Data << endl;
			MyFile.close();
		}
	}
	void AddNewClient() {
		cout << "\nPlease Enter Client Data:  " << endl;
		soln47::Client Client;
		Client = soln47::ReadNewClient();
		cout << "\n\nClient Record for Saving is: \n";
		string Line = soln47::ConvertRecordToLine(Client);
		cout << Line << endl;
		AddDataToFile("clients.txt", Line);
	}
	void AddClients() {
		char AddMore = 'Y';
		do
		{
			system("cls");
			cout << "Adding New Client: " << endl;
			AddNewClient();
			cout << "\nClient Added Successfully, do you want to add more clients? Y/N? ";
			cin >> AddMore;
		} while (toupper(AddMore) == 'Y');
	}


}
void AddClientsToFileEX() {
	soln47::AddClients();
}


