// ConsoleApplication14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
    

{
	int amount = 0;
	int Sum = 0;
	int number = 0;

	do
	{
		cout << "Enter " << amount + 1 << " number=";
		cin >> number;

		if (number)
		{
			amount++;
			Sum += number;

		}

	} while (number);
	cout << "Sum of numbers= " << Sum << endl;
	cout << "Amount of numbers= " << amount << endl;
    system ("pause");
}

