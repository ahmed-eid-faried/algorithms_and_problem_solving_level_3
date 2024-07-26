#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln5
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
				printf("%0*d   ", 2, arr[i][j]);
				//cout << setw(3) << arr[i][j] << "     ";

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

	int  ColSum(int arr[3][3], short ColNumber, short Cols)
	{
		int Sum = 0;
		for (short j = 0; j <= Cols - 1; j++)
		{
			Sum += arr[j][ColNumber];
		}
		return Sum;

	}

	void ColsSumInArray(int arr[3][3], int arr2[3], short Rows, short Cols) {
		for (short i = 0; i < Rows; i++) {
			arr2[i] = ColSum(arr, i, Cols);
		}
	}


	void PrintEachColsSum(int arr2[3], short Cols) {
		cout << "\nThe the following are the sum of each col in the matrix:\n";
		for (short i = 0; i < Cols; i++) {
			cout << " Col " << i + 1 << " Sum = " << arr2[i] << endl;
		}
	}

}


void ColsSumInArrayEx() {
	int arr[3][3];
	int arr2[3];
	soln5::FillMatrixByRandomNum2(arr);
	soln5::PrintMatrix(arr);

	soln5::ColsSumInArray(arr, arr2, 3, 3);
	soln5::PrintEachColsSum(arr2, 3);
	system("pause>0");
}