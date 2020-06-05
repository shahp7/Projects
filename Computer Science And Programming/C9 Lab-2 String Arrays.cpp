// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C9 Lab-2 String Arrays.cpp : Defines the entry point for the console application.
// Description: using a set of strings to make a line of array

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
const int MAX = 5; 
double FUNTIME[100]; 

int main()
{
	string fun;
	cout << "Part 1" << endl;
	for (int i = 0; i < MAX; i++)
	{
		cout << "Enter a line of text: ";
		getline(cin, fun);

		cout << "You entered: " << fun << endl;

		if (fun.find("the") == string::npos)
			cout << "\'the\' not found" << endl;
		else
			cout << "\'the\' found at position " << fun.find("the") << endl;
		cout << endl;
	}
	cout << endl;
	cout << "Part 2" << endl;
	bool run = true;
	int i = 0;
	double sum = 0;
	do
	{
		cout << "Enter a number or enter 0 to end the program: "; 
		cin >> FUNTIME[i];
		if (FUNTIME[i] == 0)
		{
			run = false;
			cout << "The sum: " << sum << endl; 
		}
		else
			sum += FUNTIME[i];
		i++;
	} while (run == true);
	cout << "The Average: " << sum / i << endl; 

	cin.get();
	cin.get(); 
	return 0;
}

