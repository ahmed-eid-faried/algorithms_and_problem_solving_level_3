#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln11
{
	int RandomNumber(int From, int To) {
		int randNum = rand() % (To - From + 1) + From;
		return randNum;
	}

	void PrintMatrix(int  Matrix[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				printf("%0*d   ", 2, Matrix[i][j]);

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
	int SumOfMatrix(int  Matrix[3][3], int cols, int rows) {
		int	sum = 0;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				sum += Matrix[i][j];
			}
		}

		return sum;
	}
	bool AreEqualMatrices(int  Matrix1[3][3], int  Matrix2[3][3], int cols, int rows) {
		return (SumOfMatrix(Matrix1, cols, rows) == SumOfMatrix(Matrix2, cols, rows));
	}
}


void EqualMatricesEx() {


	int Matrix1[3][3], Matrix2[3][3];
	cout << "\nThe following is a 3x3 matrix 1:\n";
	soln11::FillMatrixByRandomNum2(Matrix1);
	soln11::PrintMatrix(Matrix1);
	cout << "\nThe following is a 3x3 matrix 2:\n";
	soln11::FillMatrixByRandomNum2(Matrix2);
	soln11::PrintMatrix(Matrix2);

	if (soln11::AreEqualMatrices(Matrix1, Matrix2, 3, 3))
		cout << "\nYES: both martices are equal.";
	else
		cout << "\nNo: martices are NOT equal.";
}