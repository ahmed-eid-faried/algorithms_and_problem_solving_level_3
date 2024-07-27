#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln15
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

}


void CountNumberInMatrixEx() {
	int Matrix[3][3];
	int Matrix2[3][3] = { {6,3,0},{0,6,2},{0,3,6} };
	cout << "\nThe following is a 3x3 matrix m1:\n";
	soln15::FillMatrixByRandomNum2(Matrix);
	soln15::PrintMatrix(Matrix);
	int SelectedNum1 = soln15::ReadNumber("PLEASE ENTER NUMBER TO COUNT IN MATRIX: ");
	cout << "Number  " << SelectedNum1 << " count in  matrix is ";
	cout << soln15::CountNumberInMatrix(Matrix, SelectedNum1, 3, 3) << endl;	
	cout << "\n\n\n\nThe following is a 3x3 matrix m1:\n";
	soln15::PrintMatrix(Matrix2);
	int SelectedNum2 = soln15::ReadNumber("PLEASE ENTER NUMBER TO COUNT IN MATRIX: ");
	cout << "Number  " << SelectedNum2 << " count in  matrix is ";
	cout << soln15::CountNumberInMatrix(Matrix2, SelectedNum2, 3, 3) << endl;
}