#pragma once
#include <iomanip>
#include <iostream>
using namespace std;
namespace soln6
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

}


void OrderedMatrix3x3() {
	int arr[3][3];

	soln6::FillMatrixByRandomNum2(arr);
	soln6::PrintMatrix(arr);
}