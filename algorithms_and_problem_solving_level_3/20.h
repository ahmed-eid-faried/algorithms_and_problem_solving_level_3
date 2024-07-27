#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
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
	cout << "\nMatrix1:\n";
	soln20::PrintMatrix(Matrix1, 3, 3);
	if (soln20::IsPalindromeMatrix(Matrix1, 3, 3))
	{
		cout << "\nYes: Matrix is Palindrome\n";
	}
	else          cout << "\nNo: Matrix is NOT Palindrome\n";
}