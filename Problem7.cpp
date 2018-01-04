// Problem7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

bool equalDigits(int num)
{
	while (num >= 10)
	{
		int first = num % 10;
		int second = num / 10 % 10;
		//cout << first << " " << second << endl;	
		if (first != second)
			{
				return false;		
			}
		num /= 10;
	}
	return true;
}

int main()
{
	int i = 1;
	while (i++)
	{
		if (equalDigits(i * 18))
		{
			cout << "The number is: " << i << endl;
			cout << "The number multiplied by 18 is: " << i * 18;
			break;
		}
	}
	cout << endl;
    return 0;
}

