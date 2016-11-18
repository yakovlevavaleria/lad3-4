// Двумерный массив с указателем.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <locale>
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

int main()
{

	int N;
	int M;

	cout << "Enter N=" << endl;
	cin >> N; 
	cout << "Enter M=" << endl;
	cin >> M;

	int **arr = new int*[N];

	for (int count = 0; count < N; count++)
		arr[count] = new int[M];

	for (int row = 0; row < N; row++)
	{
		for (int col = 0; col < M; col++)
		{
			arr[row][col] = 1 + rand() % 100;
			cout << setw(4) << arr[row][col];
		}
		cout << endl;
	}

	cout << "\n Even:\nrow;col = \n";
	for (int row = 0; row < N; row++)
		for (int col = 0; col < M; col++)
			if (arr[row][col] % 2 == 0)
				cout << row << ';' << col << " = " << arr[row][col] << endl;

	cout << "\n Odd:\nrow;col = \n";
	for (int row = 0; row < N; row++)
		for (int col = 0; col < M; col++)
			if (arr[row][col] % 2 != 0)
				cout << row << ';' << col << " = " << arr[row][col] << endl;

	for (int count = 0; count < N; count++)
		delete[] arr[count];

	delete[] arr;

	system("pause");
	return 0;
}