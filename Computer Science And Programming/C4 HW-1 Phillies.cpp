// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C4 HW-1 Phillies.cpp  
// Description: making a function to calcute player average




#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
using namespace std;
void batting(float average);
void fielding(float FPCT);
float computeBonus(float, float); 


int main(void)
{
	float errors, hits, bats, average, FPCT, total; 
	string name; 
	

	cout << "Enter the player name: " ; 
	cin >> name;
	cout << "Enter the player number of hits: " ;
	cin >> hits;
	cout << "Enter the player number of at-bats: "; 
	cin >> bats;
	cout << "Enter the player number of errors:  ";
	cin >> errors;

	average = hits / bats;

	cout << "Name: " << name << endl; 
	
	cout << "The average is " << average << endl;
	batting(average);

	FPCT = (errors);

	cout << "The errors is " << FPCT << endl; 
	fielding(FPCT);

	total = computeBonus(FPCT, average);
	cout << "The total of both bonus is  " << total << endl;
	

	cin.get();
	cin.get(); 

	return EXIT_SUCCESS;
}
void batting(float average)
{
	if (average >= .350)
	cout << "The bonus amount for batting average is $150,000" << endl;
	else if (average >= .326)
	cout << "The bonus amount for batting average is $100,000" << endl;
	else if (average >= .300)
	cout << " The bonus amount for batting average is $50,000 " << endl;
	else
	cout << " The bonus amount for batting average is $0" << endl;
}

void fielding(float FPCT)
{
	if (FPCT <= 20)
		cout << "The bonus amount for fielding excellence is $10,000" << endl;
	else if (FPCT <= 25)
		cout << "The bonus amount for fielding excellence is $5,000" << endl;
	else
		cout << "The bonus amount for fielding excellence is $0" << endl; 

}

float computeBonus(float FPCT, float average) {
	float total; 
	total = FPCT + average; 
	return total;
}
