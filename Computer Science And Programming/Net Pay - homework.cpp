// Author: Poonam Shah  <shahp7@student.rowan.edu>
// CS&P Net Pay Homework 
// Description: Net Pay
// Written: September, 12, 2017
// Last Updated : September, 20 2017. 

#include "stdafx.h" 
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


	

int main()
{
	string name, company ; 
	double grossPay, wage, hours, fed, medical, savings, netPay, state; 

	cout << "Name of Employee: ";
	cin >> name;

	cout << "Name of Company:  ";
	cin >> company; 

	cout << "Hours worked:  "; 
	cin >> hours; 

	cout << "Hourly wage: " ; 
	cin >> wage;

	grossPay = hours * wage;

	fed = grossPay * .20; 
	state = grossPay *.03;
	medical = grossPay * .10;
	savings = grossPay * .05;

	netPay = grossPay - fed - state - medical - savings;
	cout << endl; 
	cout << "Gross Pay " << fixed << showpoint<< setprecision(2) << grossPay << endl;

	cout << "Tax amount " << fixed << showpoint << setprecision(2) << fed + state << endl;

	cout << "401K contributions " << fixed << showpoint << setprecision(2) << savings << endl;

	cout << "Medical Expenses " << fixed << showpoint << setprecision(2) << medical << endl;

	cout << "Net Pay " << fixed << showpoint << setprecision(2) << netPay << endl;
		
	cin.get();
	cin.get();


return EXIT_SUCCESS ;
}

