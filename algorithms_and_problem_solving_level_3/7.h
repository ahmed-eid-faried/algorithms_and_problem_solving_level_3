#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln7
{

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
		int counter = 0;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				counter++;
				arr[i][j] = counter;
			}
		}
	}
	void TransposeMatrix(int  arr[3][3], int  arrTransposed[3][3], int cols, int rows) {
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < cols; j++)
			{
				arrTransposed[i][j] = arr[j][i];
			}
		}
	}

}


void TransposeMatrixEx() {


	int arr[3][3], arrTransposed[3][3];
	soln7::FillMatrixByRandomNum2(arr);
	cout << "\nThe following is a 3x3 ordered matrix:\n";
	soln7::PrintMatrix(arr);
	soln7::TransposeMatrix(arr, arrTransposed, 3, 3);
	cout << "\n\nThe following is the transposed matrix:\n";
	soln7::PrintMatrix(arrTransposed);
}