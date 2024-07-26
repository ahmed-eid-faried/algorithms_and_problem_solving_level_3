#include <iostream>
#include "1_random_matrix.h"
#include "2.h"

int main()
{
	//Seeds the random number generator in C++, called only once  
	srand((unsigned)time(NULL));
	//RandomMatrix3x3();
	RandomMatrixWithRowSum();
	RandomMatrixWithRowSumInOneDArray();
	//std::cout << "Hello World!\n";
}

