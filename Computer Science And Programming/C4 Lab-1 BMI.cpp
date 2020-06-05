// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C4 Lab-1 BMI
// Description: writing out the calculation for the funtion of BMI
// Written:  September, 6, 2017
//Last Updated: September, 13 2017



#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
void CDC(float BMI);
char getCategory(float BMI);
void getMessage(char category);

int main(void)
{
	float height, weight, BMI; 
	string name;
	char category;

	cout << "Enter your first name:  ";
	cin >> name;
	cout << "Enter your height in inches: ";
	cin >> height;
	cout << "Enter your weight in pounds: ";
	cin >> weight; 

	BMI = (703 * weight) / (height * height); 

	cout << "Your BMI is :  " << BMI << endl; 
	CDC(BMI);

	category = getCategory(BMI); 
	getMessage(category);

	cin.get();
	cin.get();

return EXIT_SUCCESS;
}

void CDC(float BMI) 
{
	if (BMI >= 30.00)
		cout << "By CDC standards you are consider Obese" << endl;
	else if (BMI >= 25.0)
		cout << "By CDC standards you are consider Overweight" << endl;
	else if (BMI >= 18.5)
		cout << "By CDC standards you are consider Normal" << endl;
	else
		cout << "By CDC standards you are consider Underweight" << endl;

}
 char getCategory(float BMI)
{
	 if (BMI >= 30.00)
		 return 'B';
	 else if (BMI >= 25.0)
		 return 'O';
	 else if (BMI >= 18.5)
		 return 'N';
	 else
		 return 'U';
}
 void getMessage(char category)
 { 
	 switch (category)
	 {
	 case 'B':
		 cout << "Time to go to the gym";
		 break;
	 case 'O':
		cout << "Stop eating cookies";
		break;
	 case 'N':
		 cout << "You are fine!";
		 break;
	 case 'U':
		 cout << "Going to Taco Bell"; 
		 


}
 }