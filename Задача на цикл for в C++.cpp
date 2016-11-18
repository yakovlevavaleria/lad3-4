// ConsoleApplication13.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	int amount = 0;
	int Maxage = 0;
	int Minage = 100;
	int average = 0;
	int age = 0;
	int Sum = 0;

	cout << "Enter the amount of jym visitors= ";
	cin >> amount;

	for (int i = 0; i < amount; i++) {
		cout << "enter age of  " <<  i + 1  << " visitor= ";
		cin >> age;
		if (age > Maxage)
			Maxage = age;
		if (age < Minage)
			Minage = age;
		Sum += age;
	}

	average = Sum / amount;
	cout << "Amount of visitors= " << amount << endl;
	cout << "Max age of visitors= " << Maxage << endl;
	cout << "Min Age of visitors= " << Minage << endl;
	cout << "Average age of visitors= " << average << endl;


    system ("pause");
}

