
// Author: Poonam Shah <shahp7@student.rowan.edu>
// C5 Lab-9 Floyd’s Triangle.cpp 
// Description: This particular program is a demonstration of nested-for loop.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <conio.h>
using namespace std;

int main()
{

	int rows, i, j, k = 1;
	cout << "Enter value of n:  ";
	cin >> rows;
	cout << "The number triangle:" << endl;
	for (i = 1; i <= rows; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << k << " ";

		}
		k++;
		cout << endl;
	}
	cin.get();
	cin.get();
	return 0;

}