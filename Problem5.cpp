// Problem5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>

using namespace std;

int min(int a, int b)
{
	if (a < b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int max(int a, int b)
{
	if (a > b)
	{
		return a; 
	}
	else
	{
		return b; 
	}
}
const int SIZE = 100;
int main()
{
	int arr[SIZE];
	int i = 0;
	int j = 0;
	int num = 0;
	cout << "Enter a number between 1 000 and 1 000 000: ";
	cin >> num;
	while (num <= 1000 || num >= 1000000)
	{
		cout << "Please, enter a number between 1000 and 1 000 000: ";
		cin >> num;
	}
	int k = 0;
	cout << "Number of 0: ";
	cin >> k;
	int count = 0;
	int maxCount = 0;

	while (num > 1)
	{
		arr[i] = num % 2;
		i++;
		num /= 2;
	}
	cout << "Binary Number: ";
	for (int j = i - 1; j >= 0; --j)
	{
		cout << arr[j];
	}

	for (int j = i - 1; j >= num; --j)
	{

		if (arr[j] == 0)
		{
			count++;
		}
		else
		{
			maxCount = max(count, maxCount);
			count = 0;
		}		
	}	
	cout << " - number of consecutive 0: " << min(maxCount, k) << endl; 
 return 0;
}

