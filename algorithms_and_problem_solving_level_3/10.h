#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln10
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
	int SumMatrix(int  Matrix[3][3], int cols, int rows) {
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

}


void MiddleRowAndMiddleColInMatrix() {


	int Matrix[3][3];
	cout << "\nThe following is a 3x3 matrix:\n";
	soln10::FillMatrixByRandomNum2(Matrix);
	soln10::PrintMatrix(Matrix);
	cout << "\nSum of Matrix: " << soln10::SumMatrix(Matrix, 3, 3);

}