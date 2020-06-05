// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C9 HW -2 odd
// Description: printing a set of arrays set to a Max

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	{
		const int MAX_ITEMS = 8;

		float x[MAX_ITEMS];          // array of data
		float average;               // average value of data
		float sum;                   // sum of the data

									 // Enter the data.
		cout << "Enter " << MAX_ITEMS << " numbers: ";
		for (int i = 0; i < MAX_ITEMS; i++)
			cin >> x[i];

		// Compute the average value.
		sum = 0.0;                   // initialize sum
		for (int i = 0; i < MAX_ITEMS; i+=2)
			sum += x[i];              // add each element to sum
		average = sum / MAX_ITEMS;   // get average value

		cout << "The average value is " << average << endl << endl;

		// Display the difference between each item and the average.
		cout << "Table of differences between x[i] and the average."
			<< endl;
		cout << setw(4) << "i" << setw(8) << "x[i]"
			<< setw(14) << "difference" << endl;
		for (int i = 0; i < MAX_ITEMS; i+=2)
			cout << setw(4) << i << setw(8) << x[i]
			<< setw(10) << (x[i] - average) << endl;

		cin.get();
		cin.get();
		return EXIT_SUCCESS;
	}
   
}

