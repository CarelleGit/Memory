#include <iostream>
#include "globals.h"
#include <cassert>

using std::cout;
using std::cin;


//int globalOffensive = 0;
//void makeItTwo()
//{
//	globalOffensive = 2;
//}
//void makeItOne()
//{
//	globalOffensive = 1;
//}

int halfLove = 1;
int counter = 0;
void releaseHalfLove()
{
	static int counter = 0;
	cout << "Half-Love " << counter + 1 << " was relesased\n";
	counter = ++counter % 2;
}

void stepFizzBuzz()
{
	static int counter = 1;

		if (counter % 3 == 0)
		{
			cout << "Fizz\n";
			if (counter % 5 == 0)
			{
				cout << "fizzBuzz\n";
			}
		}
		else if (counter % 5 == 0)
		{
			cout << "Buzz\n";
		}
		else
		{
			cout << counter << "\n";
		}
}

void increment()
{
	counter++;
}

void decrement()
{
	counter--;
}
float divide(float lhs, float rhs)
{
	return 0.0f;
}

void callMeMaybe()
{

	static int counter = 0;
	if (counter == 0)
	{
		cout << "Hello\n";
	}
	else if (counter==1)
	{
		cout << "I'm busy\n";
	}
	else if (counter == 3)
	{
		cout << "i'm creating a virtal world\n";
	}

	counter = ++counter % 10;
}

int & picker(int & optA, int & optB, int & optC)
{
	static int counter = 0;
	switch (counter)
	{
	case 0:
		return optA;
		break;
	case 1:
		return optB;
		break;
	case 2:
		return optC;
		break;
	default:
		return optA;
		break;
	}

	// TODO: insert return statement here
}

void gridGen(int width, int height)
{

	assert(width > -1);
	assert(height > -1);

}
