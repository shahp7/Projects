
// Author: Poonam Shah <shahp7@student.rowan.edu>
// C5 Lab-8 Multiplication Table.cpp 
// Description: Create a program that will display a multiplication table like the output shown below.

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

const int MAX = 10; 
int main()
{
	cout << "     |";
	for (int colHead = 0; colHead < MAX; colHead++)
		cout << setw(3) << colHead;
	cout << endl; 
	cout << "____________________________________" << endl; 

	for (int rowVal = 0; rowVal < MAX; rowVal++)
	{ 
		cout << setw(3) << rowVal << "  |";

		for (int colVal = 0; colVal < MAX; colVal++)
			cout << setw(3) << rowVal * colVal;
		cout << endl; 
	
	
	}
	cin.get();
	cin.get(); 
    return 0;
}

