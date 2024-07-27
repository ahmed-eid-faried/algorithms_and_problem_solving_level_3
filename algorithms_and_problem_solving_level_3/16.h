#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln16
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
	int CountNumberInMatrix(int  Matrix[3][3], int SelectedNum, int cols, int rows) {
		int counter = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (Matrix[i][j] == SelectedNum)counter++;
			}
		}

		return counter;
	}
	bool IsSparseMatrix2(int  Matrix[3][3], int cols, int rows) {
		int MatrixSize = cols * rows;
		return (CountNumberInMatrix(Matrix, 0, cols, rows) >= (MatrixSize / 2));
	}
	bool IsSparseMatrix(int  Matrix[3][3], int cols, int rows) {
		int counterZero = 0;
		int counterNotZero = 0;
		double HafltotalNumOfMatrix = 0.5 * cols * rows;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				(Matrix[i][j] == 0) ? counterZero++ : counterNotZero++;
				if (counterZero >= HafltotalNumOfMatrix)return true;
				if (counterNotZero > HafltotalNumOfMatrix)return false;
			}
		}

	}

}


void CheckIsSparceMatrixEx() {
	int Matrix[3][3];
	int Matrix2[3][3] = { {0,0,0},{0,0,2},{0,3,6} };
	cout << "\nThe following is a 3x3 matrix:\n";
	soln16::FillMatrixByRandomNum2(Matrix);
	soln16::PrintMatrix(Matrix);
	if (soln16::IsSparseMatrix(Matrix, 3, 3))
		cout << "\nYes: It is Sparse Matrix\n";
	else
		cout << "\nNo: It's NOT Sparse Matrix\n";
	cout << "\n\n\n\nThe following is a 3x3 matrix:\n";
	soln16::PrintMatrix(Matrix2);
	if (soln16::IsSparseMatrix2(Matrix2, 3, 3))
		cout << "\nYes: It is Sparse Matrix\n";
	else
		cout << "\nNo: It's NOT Sparse Matrix\n";
}