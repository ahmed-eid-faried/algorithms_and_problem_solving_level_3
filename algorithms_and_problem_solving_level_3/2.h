#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln2
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
	void PrintEachRowSum(int arr[3][3]) {
		int sum = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				sum += arr[i][j];

			}
			cout << "Row " << i + 1 << " Sum = " << sum << endl;
			sum = 0;
		}
	}


	int RowSum(int arr[3][3], short RowNumber, short Cols) {
		int Sum = 0;
		for (short j = 0; j <= Cols - 1; j++)
		{
			Sum += arr[RowNumber][j];
		}
		return Sum;
	}
	void PrintEachRowSum(int arr[3][3], short Rows, short Cols)
	{
		cout << "\nThe the following are the sum of each row in the matrix:\n";
		for (short i = 0; i < Rows; i++) {
			cout << " Row " << i + 1 << " Sum = " << RowSum(arr, i, Cols) << endl;
		}
	}
}


void RandomMatrixWithRowSum() {
	int arr[3][3];

	soln2::FillMatrixByRandomNum2(arr);
	soln2::PrintMatrix(arr);

	//soln2::PrintEachRowSum(arr);
	soln2::PrintEachRowSum(arr, 3, 3);
	system("pause>0");
}