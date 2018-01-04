// Problem2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int ROWS = 6;
const int COLS = 6; 

int main()
{
	int arr[ROWS][COLS] = { { 11,12,13,14,15,16 },
							{ 21,22,23,24,25,26 },
							{ 31,32,33,34,35,36 },
							{ 41,42,43,44,45,46 },
							{ 51,52,53,54,55,56 },
							{ 61,62,63,64,65,66 } };
	int sum = 0;
	int totalSum = 0;
	
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLS; j+=2)
		{			
			cout << arr[i][j] << ", ";
			sum += arr[i][j];
			
			if (arr[i][j] % 2 != 0)
			{
				totalSum += arr[i][j];
			}			
		}
		cout << ", Sum of the elements: " << sum << " " << endl;
		sum = 0;
	}
	cout << "Total Sum = " << totalSum << endl;
    return 0;
}

