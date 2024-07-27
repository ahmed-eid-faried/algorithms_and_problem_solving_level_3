#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
//
//vector<int> plusOne(vector<int>& digits) {
//
//	vector<int>  digits2;
//	for (int i = digits.size() - 1; i >= 0; i--)
//	{
//		digits[digits.size() - 1]+1
//		if()
//		if (digits[i] == 9) {
//			digits2.
//				.push_back(1);
//			digits2.push_back(0);
//		}
//		else {
//			digits2.push_back(digits[i] + 1);
//		}
//	}
//
//
//	return digits2;
//}
namespace soln20
{
	int RandomNumber(int From, int To) {
		int randNum = rand() % (To - From + 1) + From;
		return randNum;
	}
	void PrintMatrix(int  Matrix[3][3], int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				//printf("%0*d   ", 2, Matrix[i][j]);
				cout << setw(5) << Matrix[i][j] << "     ";

			}
			cout << endl;
		}
	}
	void FillMatrixByRandomNum2(int  Matrix[3][3], int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				Matrix[i][j] = RandomNumber(1, 100);
			}
		}
	}
	bool IsNumberInMatrix(int  Matrix[3][3], int SelectedNum, int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (Matrix[i][j] == SelectedNum)return true;
			}
		}

		return false;
	}

	bool IsPalindromeMatrix(int  Matrix[3][3], int cols, int rows) {
		int min = Matrix[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (Matrix[i][j] != Matrix[i][cols - 1 - j]) return false;
			}
		}

		return true;
	}
}

//

void PalindromeMatrixEx() {
	int Matrix1[3][3] = { {1,2,1},{5,5,5},{7,3,7} };
	vector<int>  digits = { 1,2,1,5,5,5,7,3,7 };
	cout << "\nMatrix1:\n";
	soln20::PrintMatrix(Matrix1, 3, 3);
	if (soln20::IsPalindromeMatrix(Matrix1, 3, 3))
	{
		cout << "\nYes: Matrix is Palindrome\n";
	}
	else          cout << "\nNo: Matrix is NOT Palindrome\n";

	//cout << plusOne(digits).size();
}
//
//bool isPalindrome(int x) {
//	string str = to_string(x);
//	for (int i = 0; i < ceil(str.length() / 2); i++)
//	{
//		if (str[i] != str[str.length() - 1 - i])return false;
//	}
//	return true;
//}
//int power(int base, int power) {
//	int num = 1;
//	for (int i = 0; i < power; i++)
//	{
//		base *= base;
//	}
//}
//vector<int> plusOne(vector<int>& digits) {
//	string numStr = "";
//	int num = 0;
//
//	for (int i = 0; i < digits.size(); i++)
//	{
//		numStr += digits[i];
//	}
//	num = stoi(numStr);
//	num++;
//	numStr = to_string(num);
//	for (int i = 0; i < numStr.size(); i++)
//	{
//		digits[i] = numStr[i];
//	}
//	return digits;
//
//
//	if (digits[digits.size() - 1] == 9) {
//		digits[digits.size() - 1] = 1;
//		digits.push_back(0);
//	}
//	else {
//		digits[digits.size() - 1] = digits[digits.size() - 1] + 1;
//	}
//	return digits;
//}

