#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln8
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
	void MultiplyMatrix(int  Matrix[3][3], int  Matrix2[3][3], int  reslutMatrix[3][3], int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				reslutMatrix[i][j] = Matrix[i][j] * Matrix2[i][j];
			}
		}
	}

}


void MultiplyMatrixEx() {


	int Matrix[3][3], Matrix2[3][3], reslutMatrix[3][3];
	cout << "\nThe following is a 3x3 frist matrix m1:\n";
	soln8::FillMatrixByRandomNum2(Matrix);
	soln8::PrintMatrix(Matrix);
	cout << "\nThe following is a 3x3 second matrix m2:\n";
	soln8::FillMatrixByRandomNum2(Matrix2);
	soln8::PrintMatrix(Matrix2);
	soln8::MultiplyMatrix(Matrix, Matrix2, reslutMatrix, 3, 3);
	cout << "\nResults m1*m2:\n";
	soln8::PrintMatrix(reslutMatrix);
}