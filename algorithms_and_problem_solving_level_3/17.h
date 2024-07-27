#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln17
{
	int ReadNumber(string Message) {
		int Num;
		cout << Message;
		cin >> Num;
		return Num;
	}
	int RandomNumber(int From, int To) {
		int randNum = rand() % (To - From + 1) + From;
		return randNum;
	}
	void PrintMatrix(int  Matrix[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				//printf("%0*d   ", 2, Matrix[i][j]);
				cout << setw(5) << Matrix[i][j] << "     ";

			}
			cout << endl;
		}
	}
	void FillMatrixByRandomNum2(int  Matrix[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
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

}


void IsNumberInMatrixEx() {
	int Matrix[3][3];
	int Matrix2[3][3] = { {6,3,0},{0,6,2},{0,3,6} };
	cout << "\nThe following is a 3x3 matrix m1:\n";
	soln17::FillMatrixByRandomNum2(Matrix);
	soln17::PrintMatrix(Matrix);
	int SelectedNum1 = soln17::ReadNumber("PLEASE ENTER NUMBER TO to look for in matrix: ");
	if (soln17::IsNumberInMatrix(Matrix, SelectedNum1, 3, 3))
		cout << "\nYes it is there.\n";
	else          cout << "\nNo: It's NOT there.\n";
	cout << "\n\n\n\nThe following is a 3x3 matrix m1:\n";
	soln17::PrintMatrix(Matrix2);
	int SelectedNum2 = soln17::ReadNumber("PLEASE ENTER NUMBER TO to look for in matrix: ");
	if (soln17::IsNumberInMatrix(Matrix2, SelectedNum2, 3, 3))
		cout << "\nYes it is there.\n";
	else          cout << "\nNo: It's NOT there.\n";
}