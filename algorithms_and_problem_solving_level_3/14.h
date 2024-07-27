#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln14
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
	bool IsScalarMarix(int  Matrix[3][3], int cols, int rows) {
		int d = 1;
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i == j)
				{
					if (i == 0 && j == 0)d = Matrix[0][0];
					if (Matrix[i][j] != d)return false;
				}
				else {
					if (Matrix[i][j] != 0)return false;

				}
			}
		}

		return true;
	}

}


void IsScalarMarixEx() {


	int Matrix[3][3];
	int Matrix2[3][3] = { {1,0,0},{0,1,0},{0,0,1} };
	cout << "\nThe following is a 3x3 frist matrix m1:\n";
	soln14::FillMatrixByRandomNum2(Matrix);
	soln14::PrintMatrix(Matrix);
	if (soln14::IsScalarMarix(Matrix, 3, 3))
		cout << "\nYES: Matrix is scalar.";
	else
		cout << "\nNo: Matrix is NOT scalar.";

	cout << "\nThe following is a 3x3 frist matrix m1:\n";
	soln14::PrintMatrix(Matrix2);

	if (soln14::IsScalarMarix(Matrix, 3, 3))
		cout << "\nYES: Matrix is scalar.";
	else
		cout << "\nNo: Matrix is NOT scalar.";
}