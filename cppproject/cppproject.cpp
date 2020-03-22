// cppproject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int functiontoadd(int& value1,int& value2);

int main()
{
	int val1=100;
	int val2=200;
	int sum=functiontoadd(val1, val2);
	std::cout << "Added Value: " <<sum<< std::endl;

	return 0;
}

int functiontoadd(int& value1, int& value2)
{
	return value1 + value2;
}




