// Problem8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>

using namespace std;

const int SIZE = 40;
int main()
{
	int num = 0;
	cout << "Enter a number between 1 and 40: ";
	cin >> num;
	while (num <= 1 || num >= 40)
	{
		cout << "Please enter a number between 1 and 40: ";
		cin >> num;
	}
	

	int fib[SIZE] = { 0, 1 };
	for (int i = 2; i < num; i++)
	{
		if (i == 0)
		{
			fib[i] = 0;
		}
		else if (i == 1)
		{
			fib[i] = 1;
		}
		else
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
	}
	cout << fib[num - 1];
	cout << endl;
    return 0;
}

