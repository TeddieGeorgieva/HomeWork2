// Problem3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int ROWS = 5;
const int COLS = 4;

int main()
{
	int arrFirst[ROWS][COLS] = { { 11, 17, 4, 10 },
								{ 29, 4, 18, 18 },
								{ 22, 14, 5, 5 },
								{ 1, 27, 1, 11 },
								{ 25, 2, 27, 6 } };
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			cout << arrFirst[i][j] << " ";

		}
		cout << endl;

	}
	cout << endl;
	int sum = 0;
	int arrSecond[ROWS][COLS] = { {1,1,1,1},
								{1,1,1,1},
								{1,1,1,1},
								{1,1,1,1},
								{1,1,1,1} };
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			
			cout << arrSecond[i][j] << " ";
			sum += arrSecond[i][j];
		}		
		cout << endl;
	}
	cout << "Sum = " << sum << endl;
	cout << endl;

	int arrThird[ROWS][COLS];
	
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			arrThird[i][j] = arrFirst[i][j]* sum;
			cout << arrThird[i][j] << " ";

		}
		cout << endl;
	}

	cout << endl;

    return 0;
}

