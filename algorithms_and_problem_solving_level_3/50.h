#pragma once
#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>
using namespace std;

namespace soln49
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
		getline(cin >> ws, Text);
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
	struct Client {
		string AccountNumber;
		string PinCode;
		string	Name;
		string Phone;
		double	AccountBalance;
	};
	void Tabs(int num) {
		for (int i = 0; i < num; i++)
		{
			cout << '\t';
		}
	}
	void PrintClientHeaderTable(vector<string> vFile) {
		cout << "\n\t\t\t\t\tClient List (" << vFile.size() << ") Client(s).";
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
		cout << "| " << left << setw(15) << "Accout Number";
		cout << "| " << left << setw(10) << "Pin Code";
		cout << "| " << left << setw(40) << "Client Name";
		cout << "| " << left << setw(12) << "Phone";
		cout << "| " << left << setw(12) << "Balance";
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
	};
	void PrintClient(Client Client) {
		cout << "| " << setw(15) << left << Client.AccountNumber;
		cout << "| " << setw(10) << left << Client.PinCode;
		cout << "| " << setw(40) << left << Client.Name;
		cout << "| " << setw(12) << left << Client.Phone;
		cout << "| " << setw(12) << left << Client.AccountBalance;
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
	void DataFromFileToVector(string path, vector<string>& vFile) {
		fstream MyFile;
		MyFile.open(path, ios::in);//read Mode  
		if (MyFile.is_open()) {
			string Line;
			while (getline(MyFile, Line))
			{
				vFile.push_back(Line);
			}
			MyFile.close();
		}
	}
	void SaveVectorToFile(string path, vector<string>& vFile) {
		fstream MyFile;
		MyFile.open(path, ios::out);
		if (MyFile.is_open()) {
			for (string& Line : vFile) {
				if (Line != "") {
					MyFile << Line << endl;
				}
			}
			MyFile.close();
		}
	}

	void DeleteRecordFromFile(string path, string DeletedRecord) {
		vector<string> vFile;
		DataFromFileToVector(path, vFile);
		for (string& Line : vFile) {
			if (Line == DeletedRecord) {
				Line = "";
			}
		}
		SaveVectorToFile(path, vFile);
	}
	void DeleteRecord(string path, string DeletedRecord) {
		char Delete = 'N';
		cout << "Are you delete this account Y/N? ";
		cin >> Delete;
		if (toupper(Delete) == 'Y') {
			DeleteRecordFromFile(path, DeletedRecord);
		}
	}
	void FindClientByAccountNumber(vector<string>& vFile, string AccountNumber, string path) {
		int Counter = 0;
		for (string& Line : vFile) {
			if (!Line.empty())
			{
				Client Client = ConvertLineToRecord(Line);
				if (Client.AccountNumber == AccountNumber) {
					PrintClient(Client);
					cout << endl;
					DeleteRecord(path,Line);
					Counter++;
				}

			}
		}
		if (Counter == 0) {
			cout << "\nClient with Account Number (" << AccountNumber << ") is Not Found!";
		}
		cout << "\n_______________________________________________________";
		cout << "_________________________________________\n" << endl;
	}




}


void FindClientByAccountNumberEx() {
	string AccountNumber = soln49::ReadString("What is your AccountNumber?\n");
	vector<string> vFile;
	soln49::DataFromFileToVector("clients.txt", vFile);
	soln49::PrintClientHeaderTable(vFile);
	soln49::FindClientByAccountNumber(vFile, AccountNumber, "clients.txt");
	cout << endl;
}


