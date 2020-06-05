// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C9 Lab-1 Arrays and Functions.cpp
// Description: printing a set of arrays set to a Max

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
const int MAX = 5;
void printarray(double x[MAX]); 
void original(double x[MAX]);
void reverse(double x[MAX]);
void squared(double x[MAX]);
void tripled(double x[MAX]);

int main()
{
	double x[MAX];
	
	for (int i = 0; i < MAX; i++)
	{
		cout << "Enter " << MAX << " number: ";
		cin >> x[i];
	}
	cout << endl;
	cout << "The Array printed: " << endl; 

	printarray(x);
	reverse(x);
	squared(x);
	tripled(x);
	original(x);

	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

void original(double x[MAX])
{
	cout << endl << "The original Array printed: " << endl; 
	printarray(x);
}
void printarray(double x[MAX])
{
	for (int i = 0; i < MAX; i++)
	{
	
			cout << x[i] << ", ";

	}
}

void reverse(double x[MAX])
{
	cout << endl << "The Array printed in reverse: " << endl;


	for (int i = MAX - 1; i >= 0; i--)
	{

		cout << x[i] << ",  ";

	}
}

void squared(double x[MAX])
{
	double temp[ MAX];
	
	for (int i = 0; i < MAX; i++)
	{
		temp[i] = x[i] * x[i];
	}
	cout << endl << "The Array squared and printed: " << endl; 
	printarray(temp);

}

void tripled(double x[MAX])
{
	double temp[MAX];

	for (int i = 0; i < MAX; i++)
	{
		temp[i] = x[i] * 3;
	}
	cout << endl << "The Array tripled and printed:  " << endl; 
	printarray(temp);
}
