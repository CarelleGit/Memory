#include <iostream>
#include "Functions.h"
using std::cout;
using std::cin;

int main()
{
	/*
	//Pointer Arithmetic
	//Pointer Arithmetic 2
	int * hArr = new int[2];
	hArr[0] = 1;
	hArr[1] = 2;
	cout << hArr[0] << "\n";
	cout << *(hArr+1) << "\n";

	int * arrLarge = new int[100];
	int arrLagest[100];
	for (int i = 0; i < 100; ++i)
	{
		arrLarge[i] = i;
		arrLagest[i] = i;
	}
	for (int i = 0; i < 100; i++)
	{
		cout << arrLagest[i] << "\n";
	}
	delete[] hArr;
	delete[] arrLarge;
	//Type casting
	float dollars = 1.8f;
	cout << dollars << "\n";
	cout << (int)dollars << "\n";
	*/
	cout << "++ Close ++\n";
	// == close ==
	// 1.
	cout << "1.|\n--\n";
	float * arr = new float[3]{2.3f, 5.8f, 3.5f};
	printFloats(arr, 3);
	// 2.
	cout << "2.|\n--\n";
	int * Sum = new int[3]{ 3,6,7 };
	cout << "\t" << arraySum(Sum, 3) << "\n";
	// 3.
	cout << "3.|\n--\n";
	float * avg = new float[4]{ 3.2f,5.1f,2.1f };
	cout << "\t" << arrayAvg(avg, 4) << "\n";
	delete[] arr;
	delete[] Sum;
	delete[] avg;
	cout << "++ Open ++\n";
	// == open ==
	// 1.
	cout << "1.|\n--\n";
	int * count = new int[4]{ 1,4,3,3 };
	cout << "\t" << findCount(4, count, 4) << "\n";
	// 2.
	cout << "2.|\n--\n";
	int * dst = new int[4]{ 2,5,7,3 };
	int * src = new int[4]{ 3,4,5,6 };
    arrCopy(src, 4, dst, 4);
	// 3.
	cout << "3.|\n--\n";
	int * reverse = new int[4]{ 2,4,56,4 };
	cout << "\t" << arrReversal(reverse, 4) << "\n";
	// 4.
	cout << "4.|\n--\n";
	

	delete[] src;
	delete[] dst;
	delete[] count;
	while (true){}
}