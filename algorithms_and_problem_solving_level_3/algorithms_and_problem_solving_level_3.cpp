#include <iostream>
#include "1_random_matrix.h"
#include "2.h"
#include "3.h"
#include "4.h"
#include "5.h"
#include "6.h"

int main()
{
	//Seeds the random number generator in C++, called only once  
	srand((unsigned)time(NULL));
	//RandomMatrix3x3();
	//RandomMatrixWithRowSum();
	//SumMatixRowsInArryEx();
	//RandomMatrixWithColSum();
	//ColsSumInArrayEx();
	OrderedMatrix3x3();
	//std::cout << "Hello World!\n";
}

