#pragma once
#include <string>
#include <iostream>
#include <vector>
using namespace std;
namespace soln22 {
	void PrintFibonacciUsingRecurssion(int Number, int Prev1, int Prev2) {
		int FebNumber = 0;
		if (Number > 0)
		{
			FebNumber = Prev2 + Prev1;
			Prev2 = Prev1;
			Prev1 = FebNumber;
			cout << FebNumber << "    ";
			PrintFibonacciUsingRecurssion(Number - 1, Prev1, Prev2);
		}
	}
}
void FibonacciUsingRecursionEx() {
	soln22::PrintFibonacciUsingRecurssion(10, 1, 0);
}