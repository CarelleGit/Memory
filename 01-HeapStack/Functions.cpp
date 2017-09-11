#include "Functions.h"
#include <iostream>
using std::cout;
using std::cin;


int differnce(int * numA, int * numB)
{
	return *numA - *numB;
}

void hundred(int *nums[], int *size)
{
	
}

void arrPop(int * arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = (i + 1) * 3;
	}
}

void arrPrint(int * arr, int size)
{

	for (int i = 0; i < size; i++)
	{
		arr[i] = i + 1;
	}
}

