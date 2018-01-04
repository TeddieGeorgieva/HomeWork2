// Problem9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void sumOfDigits(int number)
{
int sum = number % 10;
int t = number / 10;
do
{
	sum += t % 10;
	t = t / 10;
} while (t != 0);

if (number % sum == 0)
{
	cout << "Yes!";
}
else
{
	cout << "No!";
}
cout << endl;
}
int main()
{
	int num = 0;
	cout << "Enter a number between 111 and 22222: ";
	cin >> num;
	while (num <= 111 || num >= 22222)
	{
		cout << "Please enter a number between 111 and 22222: ";
		cin >> num;
	}
	sumOfDigits(num);
	
	
	



    return 0;
}

