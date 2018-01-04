// Problem6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{

	int num = 0;
	int count = 4;
	while (count != 0)
	{
		if (num % 2 == 1 && num % 3 == 2 && num % 4 == 3 && num % 5 == 4
			&& num % 6 == 5 && num % 7 == 6 && num % 8 == 7 && num % 9 == 8)
		{
			cout << "Number = " << num << endl;
			count--;
		}
		num++;
	}
		
    return 0;
}

