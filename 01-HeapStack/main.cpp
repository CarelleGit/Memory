#include <iostream>
#include "Functions.h"
using std::cout;
using std::cin;


//int sum(int * numA, int * numB)
//{
//	return *numA + *numB;
//}
int main()
{
	/* //pointers
	//Heap-Allocation memory
	int age = 17;
	cout << age << "\n";

	int * agePtr = new int(18); //alocate age
	cout << agePtr << "\n";
	cout << *agePtr << "\n";

	int * ageAlias = &age;
	*ageAlias = 44;
	cout << age << "\n";
	cout << *ageAlias << "\n";



	//pointers as parameters
	int results = sum(agePtr, ageAlias);
	cout << results << "\n";

	delete agePtr; //deallocate age
	*/
	//1.
	int * age = new int(5);
	cout << *age << "\n";
	float * money = new float(42354.55f);
	cout << *money << "\n";
	bool * Food = new bool(false);
	cout << *Food << "\n";

	int * Array = new int[4];
	cout << *Array << "\n";
	float * fArray = new float[3];
	cout << *fArray << "\n";
	bool * bArray = new bool[4];
	cout << *bArray << "\n\n";
	delete age;
	delete money;
	delete Food;
	delete Array;
	delete fArray;
	delete bArray;
	//2.
	int *num = new int(1);
	int * numb = new int(5);
	int results = differnce(numb, num);
	cout << results << "\n";
	delete num;
	delete numb;
	//3.
	int * num1 = new int[100];
	for (int i = 0; i < 100; ++i)
	{
		 num1[i] = i+1;
	}
	for (int i = 0; i < 100; ++i)
	{
	cout << num1[i] << "\n";
	}
	delete num1;
	cout << "\n";
	//open 1.
	int * byThree = new int[100];
	arrPop(byThree, 100);
	arrPrint(byThree, 100);
	for (int i = 0; i < 100; ++i)
	{
		cout << byThree[i] << "\n";
	}
	delete byThree;
	cout << "\n";
	//3
	cout << "How many numbers would you like to provide?\n> ";
	int user = 0;
	int  input = -1;
	cin >> user;
	int * inputs = new int[user];
	for ( int i = 0; i < user; i++)
	{
		cout << "What's number " << i+1 << "\n> ";
		cin >> input;

		inputs[i] = input;
	}
	int even = 0;
	for (int i = 0; i < user; i++)
	{
		if (inputs[i] % 2 == 0) { even++; }
	}
	int odd = user - even;
	if (even > odd)
	{
		cout << "Mostly Even\n";
	}
	else if (even < odd)
	{
		cout << "Mostly Odd\n";
	}
	else
	{
		cout << "Equal\n";
	}
	//4
	delete[] inputs;
	int count = 0;
	int * numz = new int[count];
	cout << "how many numbers would it take to add up to 21\n";
	cin >> count;
	for (int i = 0; i < count; i++)
	{
		cout << "What's the number " << i + 1 << "\n";
		cin >> input;
		numz[i] = input;
	}
	int total = 0;
	for (int i = 0; i < count; i++)
	{
		total += numz[i];
	}
	if (total == 21)
	{
		cout << "you added 21\n";
	}
	else
	{
		cout << "that does not equal 21\n";
	}
	while (true){}
	delete[] numz; 
}