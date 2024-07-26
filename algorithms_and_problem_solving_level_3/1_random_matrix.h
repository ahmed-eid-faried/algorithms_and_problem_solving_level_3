#pragma once
#include <iomanip>
#include <iostream>
using namespace std;

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
void RandomMatrix3x3() {
	int arr[3][3];

	FillMatrixByRandomNum2(arr);
	PrintMatrix(arr);
}