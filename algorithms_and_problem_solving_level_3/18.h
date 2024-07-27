#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln18
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
	bool PrintIntersectedNumbers(int  Matrix[3][3], int  Matrix2[3][3], int cols, int rows) {

		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				int Num = Matrix[i][j];

				if (IsNumberInMatrix(Matrix2, Num, cols, rows)) {
					cout << setw(3) << Num << "  ";
				};

				//if (Matrix[i][j] == Matrix2[i][j])	return false;
			}
		}

		return true;
	}


}


void IntersectedNumbersEx() {


	int Matrix1[3][3] = { {77,5,12},{22,20,1},{1,0,9} };
	int Matrix2[3][3] = { {5,80,90},{22,77,1},{10,8,33} };
	cout << "\nMatrix1:\n";
	soln18::PrintMatrix(Matrix1, 3, 3);
	cout << "\nMatrix2:\n";
	soln18::PrintMatrix(Matrix2, 3, 3);
	cout << "\nIntersected Numbers are: \n\n";
	soln18::PrintIntersectedNumbers(Matrix1, Matrix2, 3, 3);
}