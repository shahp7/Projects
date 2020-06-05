// Author: Poonam Shah  <shahp7@student.rowan.edu
// chapter worksheet
// Description: making an array to find the average below 100

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
enum gender { male, female, trans, unspecified };
gender getGender(string);
string getGenderstring(gender); 



int main()
{
	string gen, exit;
	gender fun;
	cout << "Enter your gender: ";
	cin >> gen;
	fun = getGender(gen);
	
	exit = getGenderstring(fun);

	cout << exit;

	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

gender getGender(string gen)
{
	if (gen == "male")
		return male;
	else if (gen == "female")
		return female;
	else if (gen == "trans")
		return trans;
	else if (gen == "unspecified")
		return unspecified;
}

string getGenderstring(gender fun)
{
	switch (fun)
	{
	case male:
		return "male";
		break;
	case female:
		return "female";
		break;
	case trans:
		return "trans";
		break;
	case unspecified:
		return "unspecified";
		break;
	}
	
}
