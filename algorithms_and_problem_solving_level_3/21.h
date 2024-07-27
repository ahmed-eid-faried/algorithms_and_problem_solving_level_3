#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
namespace soln21 {
	void PrintFibonacciUsingLoop(int num) {
		int prev1 = 1;
		int prev2 = 1;
		int FebNumber = 1;
		cout << FebNumber << "   ";
		for (int i = 0; i < num - 1; i++)
		{
			cout << FebNumber << "   ";
			FebNumber = prev1 + prev2;
			prev1 = prev2;
			prev2 = FebNumber;
		}

	}
}
void FibonacciUsingLoopEx() {
	soln21::PrintFibonacciUsingLoop(10);
}