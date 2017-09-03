// stl.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stl_function.h"
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	int x = 1;
	std::cout <<negate<int>()(x)<<std::endl;
	std::cout <<plus<int>()(1,3)<<std::endl;
	std::cout <<plus<float>()(2.1,3.6)<<std::endl;
	system("pause");
	return 0;
}

