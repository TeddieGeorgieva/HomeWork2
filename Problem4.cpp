// Problem4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

const int ROWS = 105;
const int COLS = 2;

int main()
{
	int num = 0;
	cout << "Enter a number between 5 and 105: " << endl;
	cout << "Number = ";
	cin >> num;
	while (num < 5 || num > 105)
	{
		cout << "Please enter a number between 5 and 105 ";
		cin >> num;
	}
	cout << endl;
	int numerator = 0;
	int divisor = 0;
	int arr[ROWS][COLS] = { { 'num' },{ 2 } };
	for (int i = 0; i < num; ++i)
	{
		cout << "Numerator = ";
		cin >> arr[i][0];
		cout << "Divisor = ";
		cin >> arr[i][1];
		cout << endl;
	}
	cout << endl;
	
	for (int i = 0; i < num; ++i)
	{
		for (int j = 0; j < COLS; ++j)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	int value = 0;
	for (int i = 0; i < num; ++i)
	{
		value = (arr[i][0] * 100) / arr[i][1];
		cout << arr[i][0] << " " << '/' << " " << arr[i][1] << " " << '=' << " " << value << '%';		
		cout << endl;
	}
	cout << endl;
    return 0;
}

