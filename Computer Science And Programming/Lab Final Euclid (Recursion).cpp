// Lab Final Euclid (Recursion).cpp : Defines the entry point for the console application.
// Description: making an array to find the average below 100
// Author: Poonam Shah  <shahp7@student.rowan.edu

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int GCD(int a, int b);
int LCM(int a, int b);
// it should work but its not working
int main()
{
	int fun, funny, lcm, gcd; 

	cout << "Enter number 1: ";
	cin >> fun; 
	cout << "Enter number 2: ";
	cin >> funny; 
	lcm = LCM(fun, funny);
	gcd = GCD(fun, funny);
	cout << " The GCD of " << fun << " and " << funny << " is : " << gcd << endl;
	cout << " The LCM of " << fun << " and " << funny << " is : " << lcm << endl; 
	    cin.get();
		cin.get(); 
		return EXIT_SUCCESS; 

}

	int GCD(int a, int b) 
	{
		if (a == 0 && b == 0)
			return 0;
		else if (a == 0)
			return b;
		else if (b == 0)
			return a;
		else if (a < b)
			return GCD(b, a);
		else if (a&b == 0)
			return b;
		else
			return GCD(b, a&b);
	}
	int LCM(int a, int b)
	{
		if (a == 0 && b == 0)
			return -99;
		else
			return a*b / GCD(a, b);
	}