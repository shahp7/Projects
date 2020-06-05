// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C5 Lab-4 Triangles
// Description: Drawing out a trangles made out of stars

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int number ; 
	cout << "Enter a number:  ";
	cin >> number; 
	for (int i = 1; i < number; i+=2)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}
		cout << endl;

	}
		
	for (int i = -1; i < number -1 ; i = i + 2)
	{
		for (int j = i + 1; j < number; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << "Enter a number:  ";
	cin >> number;
	for (int i = number; i >= 1; i -= 2)
	{
		for (int j = number + 1; j > i; j--)
		{
			cout << " ";
		}
			for (int k = 1; k <= i; k++)
			{
				cout << "*";
			}
			cout << endl;
		}
		for (int i = number - 1; i >= 1; i-=2)
		{
			for (int j = 2; j <= i; j++)
			{
				cout << " ";
			}
			for (int k = number + 1; k >= i; k--)
			{
				cout << "*";

			}
			cout << endl;
		}
		cout << endl;

		cin.get();
		cin.get();
		return EXIT_SUCCESS;

	}