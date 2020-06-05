// Lb Final Class Year (enum).cpp : Defines the entry point for the console application.
// Author: Poonam Shah  <shahp7@student.rowan.edu
// Description: making a final class for the year

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
enum ClassYear
{
	freshman, 
	sophomore, 
	junior, 
	senior, 
	invaild 
};
const int MAX = 10; 
ClassYear arr[4]; 
ClassYear getClassYearEnum(string);
string getClassYearString(ClassYear);
int student = 0;
int main()
{
	bool run = true;
	string Class, total;
	ClassYear fun; 

	while (student < MAX) {
		student++; 
		cout << " Enter the student year: " << endl; 
		cin >> Class; 
		fun = getClassYearEnum(Class);
		total = getClassYearString(fun); 
	}

	{
		for (i = 0; i < MAX; i++)
			cout << "The students that have been enter: " << endl;
	}
	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

ClassYear getClassYearEnum(string Class)
{
	if (Class == "freshman")
		return freshman;
	else if (Class == "sophomore")
		return sophomore;
	else if (Class == "junior")
		return junior;
	else if (Class == "senior")
		return senior;
	else
		cout << "Error - Invalid Input: "; 
}

string getClassYearString(ClassYear fun)
{
	switch (fun)
	{
	case freshman:
		return "freshman";
		break;
	case sophomore:
		return "sophomore";
		break;
	case junior:
		return "junior";
		break;
	case senior:
		return "senior";
		break;
	case invaild:
		return "Error - Invalid Input ";
	}

}
