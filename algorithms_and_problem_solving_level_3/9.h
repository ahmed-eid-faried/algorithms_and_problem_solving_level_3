#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln9
{
	int RandomNumber(int From, int To) {
		int randNum = rand() % (To - From + 1) + From;
		return randNum;
	}

	void PrintMiddleColInMatrix(int  Matrix[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			printf("%0*d   ", 2, Matrix[i][1]);
		}		
		cout << endl;

	}
	void PrintMiddleRowInMatrix(int  Matrix[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			printf("%0*d   ", 2, Matrix[1][i]);
		}		
		cout << endl;

	}	void PrintMatrix(int  Matrix[3][3]) {
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


void MiddleRowAndMiddleColInMatrix() {


	int Matrix[3][3];
	cout << "\nThe following is a 3x3 matrix:\n";
	soln9::FillMatrixByRandomNum2(Matrix);
	PrintMatrix(Matrix);
	cout << "\nMiddle Row: ";
	soln9::PrintMiddleRowInMatrix(Matrix);
	cout << "\nMiddle Col: ";
	soln9::PrintMiddleColInMatrix(Matrix);


}