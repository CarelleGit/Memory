#include <iostream>
#include <cassert>
#include"globals.h"
using std::cout;
using std::cin;

//void DiffArrays(int * arrA, size_t arrASize, int * arrB, size_t arrBSize)
//{
//	for (int i = 0; i < arrBSize; i++)
//	{
//		arrA[i] -= arrB[i];
//	}
//}
//void Counter()
//{
//	static int ct = 0;
//	ct++;
//	cout << ct << "\n";
//}
int main()
{
	//int numA[] = { 3,2,1 };
	//int numb[] = { 3,2,1 };
	//for (int i = 0; i < 3; i++)
	//{
	//	cout
	//		<< numA << "\n";
	//}
	//for (int i = 0; i < 50; i++)
	//{
	//	Counter();
	//}

	//cout << globalOffensive << "\n";
	//makeItTwo();
	//cout << globalOffensive << "\n";
	//makeItOne();
	//cout << globalOffensive << "\n";

	cout << "Closed-Q: 1\n";
	for (int i = 0; i < 5; i++)
	{
		releaseHalfLove();
	}
	cout << "Q: 2\n";
	for (int i = 0; i < 20; i++)
	{
		stepFizzBuzz();
	}
	cout << counter << "\n";
	increment();
	cout << counter << "\n";
	decrement();
	cout << counter << "\n";
	increment();
	cout << counter << "\n";
	decrement();
	cout << counter << "\n";
	cout << "Q: 3\n";
	cout << divide(5.0f, 0.0f) << "\n";
	cout << "Open-Q: 1\n";
	for (int i = 0; i < 4; i++)
	{
		callMeMaybe();
	}
	cout << "Q: 2\n";
	int a = 3;
	int b = 2;
	int c = 1;
	cout << picker(a, b, c) << "\n";
	while (true){}
}
