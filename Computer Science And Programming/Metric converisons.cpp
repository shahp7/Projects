// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C2-Lab 2, Metric Conversions
// Description: Converts miles to km, inches to cm, and gallons, to liters
// Written:  September, 13, 2017
//Last Updated: September, 13 2017



#include "stdafx.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
const float Miles_per_KM = 1.609;
const float Inch_per_centimeters = 2.54; 
const float Gallon_per_liters = 3.79;
float gallons, liters, 
		miles, kms, inches, centimeters; 

	cout << "Enter the distance in miles: ";

	cin >> miles;

	cout << "Enter the number of inches:  ";

	cin >> inches;

	cout << "Enter the number of gallons: ";

	cin >> gallons;

	kms = Miles_per_KM * miles;

	cout << "There are " << kms << " kilometers in " << miles << endl;

	
	centimeters = Inch_per_centimeters * inches;

	cout << "There are " << centimeters << " centimeters in " << inches << endl;


	liters = Gallon_per_liters * gallons; 

	cout << "There are " << liters << " liters in " << gallons << endl;

	cin.get();
	cin.get();

	return EXIT_SUCCESS; 
}