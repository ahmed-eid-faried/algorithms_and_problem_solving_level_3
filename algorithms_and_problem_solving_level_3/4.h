#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln4
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

	void PrintEachColsSum(int arr[3][3], short Rows, short Cols) {
		cout << "\nThe the following are the sum of each col in the matrix:\n";
		for (short i = 0; i < Rows; i++) {

			cout << " Col " << i + 1 << " Sum = " << ColSum(arr, i, Cols) << endl;
		}
	}
	
}


void RandomMatrixWithColSum() {
	int arr[3][3];

	soln4::FillMatrixByRandomNum2(arr);
	soln4::PrintMatrix(arr);

	//soln4::PrintEachRowSum(arr);
	soln4::PrintEachColsSum(arr, 3, 3);
	system("pause>0");
}