// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C4 Lab-2 Max
// Description: You will ask the user for two numbers, showing which one is greater

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
void Max(float first, float second);
int main()
{
	float first, second;
	cout << "Enter the first number:  ";
	cin >> first;
	cout << "Enter the second number:  ";
	cin >> second;

	Max(first, second);

	cin.get();
	cin.get();
	return EXIT_SUCCESS;
}

void Max(float first, float second)
{

	if (first >= second)
	cout << "The largest is:  " << first << endl;
	else 
	cout << "The largest is:  " << second << endl; 
}