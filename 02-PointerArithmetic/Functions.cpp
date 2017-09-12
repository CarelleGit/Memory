#include "Functions.h"
#include <iostream>
using std::cout;
using std::cin;

void printFloats(float * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "\t" << *(arr + i) << "\n";
	}


}

int arraySum(int * arr, int size)
{
	int a = 0;
	for (int i = 0; i < size; ++i)
	{
		a += *(arr + i);
	}
	return a;
}

float arrayAvg(float * arr, int size)
{
	float a = 0.0f;
	for (int i = 0; i < size; i++)
	{
		a += *(arr + i) / (float)size;
	}
	return a;
}

int findCount(int target, int * arr, int size)
{
	int a = 0;
	for (int i = 0; i < size; ++i)
	{
		if (*(arr + i) == target)
		{
			a++;
		}
		
	}
	return a;
}

void arrCopy(int * srcArr, int srcSize, int * dstArr, int dstSize)
{
	for (int i = 0; i < srcSize; i++)
	{
		*(dstArr + i) = *(srcArr + i);
	}
}

int arrReversal(int * arr, int size)
{
	for (int i = 0; i < size / 2; i++)
	{
		int temp = *(arr + i);
		*(arr + i) = *(arr + size - 1 - i);
		*(arr + size - 1 - i) = temp;
		return temp;
	}

	
}

void cstrReversal(char * arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		char temp = *(arr + i);
		if (*(arr + size - 1 - i))
		{
			*(arr + i) = *(arr + size - 1 - i);
			*(arr + size - 1 - i) = temp;
		}
	}

}
