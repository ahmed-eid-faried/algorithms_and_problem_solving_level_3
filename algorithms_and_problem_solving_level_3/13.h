#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln13
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
	bool IsIdentityMarix(int  Matrix[3][3], int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				if (i == j)
				{
					if (Matrix[i][j] != 1)return false;
				}
				else {
					if (Matrix[i][j] != 0)return false;

				}
			}
		}

		return true;
	}

}


void IsIdentityMarixEx() {


	int Matrix[3][3], Matrix2[3][3];
	cout << "\nThe following is a 3x3 frist matrix m1:\n";
	soln13::FillMatrixByRandomNum2(Matrix);
	soln13::PrintMatrix(Matrix);
	if (soln13::IsIdentityMarix(Matrix, 3, 3))
		cout << "\nYES: Matrix is identity.";
	else
		cout << "\nNo: Matrix is NOT identity.";
}