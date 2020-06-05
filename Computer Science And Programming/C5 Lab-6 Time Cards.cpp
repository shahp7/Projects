// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C5 Lab-6 Time cards
// Description: creating different type of tranigles using different symbols


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	const string SENTINEL = "ZZZZZZ";
	const float Taxrate = 3.625;
	const int Maxhours = 40;
	string ename;
	float hours, rates, grosspay, tax, netpay;
	float grossTotal, NetTotal, grossAverage, netAverage;
	int employees; 
	employees = 0;
	grossTotal = 0;
	NetTotal = 0;
	grossAverage = 0;
	netAverage = 0;

	cout << "Enter employee name, rate, hours. Enter ZZZZZZ as name for exit: ";
	cout << endl; 
	cin >> ename >> rates >> hours; 
	while (ename != SENTINEL)
	{

		if (hours > Maxhours)
		{
			float extraHours = hours - Maxhours;
			grosspay = (rates * Maxhours) + (rates * (extraHours + extraHours / 2));
		}
		else
			grosspay = rates * hours;

		tax = grosspay - Taxrate / 100;

		netpay = grosspay -(3.625/100) * grosspay;

		cout << "Employee Name: " << ename << endl;
		cout << "Employee gross pay: " << grosspay << endl;
		cout << "Employee net pay: " << netpay << endl << endl;

		employees++;

		grossTotal += grosspay;
		NetTotal += netpay;

		cout << "Enter employee name, rate, hours. Enter ZZZZZZ as name for exit: ";
		cout << endl;
		cin >> ename >> rates >> hours;
	}
	if(employees > 0)
	{ 
		grossAverage = grossTotal / employees;
		netAverage = NetTotal / employees; 
	}
	cout << "Total gross amount: " << grossTotal << endl; 
	cout << "Total net amount: " << NetTotal << endl; 
	cout << "Average gross amount: " << grossAverage << endl; 
	cout << "Average net amount: " << netAverage << endl; 

	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

