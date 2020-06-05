// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C5 lab-3 Oil Tank
// Description: fixing the oil tank program

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

const float CAPACITY = 10000;	
const float MINPCT = 10.0; 

float monitorOil(float, float);

int main()
{
	float supply, oilLeft, minOil;       	
	char tanks;
	tanks = 'N';
	while (tanks == 'N')
	{
		cout << "Enter initial oil supply: ";
		cin >> supply;

		minOil = CAPACITY * (MINPCT / 100.0);

		oilLeft = monitorOil(supply, minOil);

		cout << endl << oilLeft << " gallons left in tank." << endl;
		if (oilLeft < minOil)
		cout << "Warning - amount of oil left is below minimum!" << endl;
		cout << "Are all tanks monitored - Y or N?"; 
		cin >> tanks;
	}
	cin.get();
	cin.get();
	return 0;
}

float monitorOil(float supply, float minOil)
{
	float usage, oilLeft, oiltotal;
	oilLeft = supply;
	while (oilLeft > minOil) {
		cout << "Enter amount used today: ";
		cin >> usage;
		oiltotal = oilLeft;
		oilLeft -= usage;
		if (oilLeft >= minOil)
			cout << "After removal of " << usage << " gallons,"
			<< endl << "number of gallons left is " << oilLeft << endl << endl;
		else
			cout << "Warning - amount of oil left if  " << usage << " gallons is used"
			<< endl << "will be below the minimum of 1000 gallons."
			<< endl << "There is " << oiltotal << "  gallons left in tank" << endl; 
	}

	return oilLeft;
}