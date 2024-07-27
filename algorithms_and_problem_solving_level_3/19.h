#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln19
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
	int MaxNumInMatrix(int  Matrix[3][3], int cols, int rows) {
		int max = Matrix[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (Matrix[i][j] > max)  max = Matrix[i][j];
			}
		}

		return max;
	}
	int MinNumInMatrix(int  Matrix[3][3], int cols, int rows) {
		int min = Matrix[0][0];
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (Matrix[i][j] < min)  min = Matrix[i][j];
			}
		}

		return min;
	}
}


void MinNumAndMaxNumInMatrix() {


	int Matrix1[3][3];
	soln19::FillMatrixByRandomNum2(Matrix1, 3, 3);
	cout << "\nMatrix1:\n";
	soln19::PrintMatrix(Matrix1, 3, 3);
	cout << "\nMinimum Number is: ";
	cout << soln19::MinNumInMatrix(Matrix1, 3, 3);
	cout << "\n\nMax Number is: ";
	cout << soln19::MaxNumInMatrix(Matrix1, 3, 3);
}