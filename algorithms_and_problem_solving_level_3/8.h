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

	void PrintMatrix(int  arr[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				//printf("%0*d   ", 2, arr[i][j]);
				cout << setw(5) << arr[i][j] << "     ";

			}
			cout << endl;
		}
	}
	void FillMatrixByRandomNum2(int  arr[3][3]) {
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				arr[i][j] = RandomNumber(1, 100);
			}
		}
	}
	void MultiplyMatrix(int  arr[3][3], int  arr2[3][3], int  reslutArray[3][3], int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				reslutArray[i][j] = arr[i][j] * arr2[i][j];
			}
		}
	}

}


void MultiplyMatrixEx() {


	int arr[3][3], arr2[3][3], reslutArray[3][3];
	cout << "\nThe following is a 3x3 frist matrix m1:\n";
	soln8::FillMatrixByRandomNum2(arr);
	soln8::PrintMatrix(arr);
	cout << "\nThe following is a 3x3 second matrix m2:\n";
	soln8::FillMatrixByRandomNum2(arr2);
	soln8::PrintMatrix(arr2);
	soln8::MultiplyMatrix(arr, arr2, reslutArray, 3, 3);
	cout << "\nResults m1*m2:\n";
	soln8::PrintMatrix(reslutArray);
}