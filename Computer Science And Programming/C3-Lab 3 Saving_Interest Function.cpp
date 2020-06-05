// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C3 Lab-3 Savings_Interest Function
// Description: finding the interest the  person had in February


#include "stdafx.h" 
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

float getInput(string s);

float getInterestEarned(float balance, float intrestRate);

void displayAmounts(float balance, float intrestEarned);

int main()

{

	const float INTEREST_RATE = 0.015;

	float balance = getInput("Enter balance: ");

	float interestEarned = getInterestEarned(balance, INTEREST_RATE);

	displayAmounts(balance, interestEarned);

	return 0;

}

float getInput(string s)

{

	float val;
	cout << s;
	cin >> val;
	return val; 

}

float getInterestEarned(float balance, float intrestRate)

{
	return balance * intrestRate;
}

void displayAmounts(float balance, float intrestEarned)

{
	cout << fixed << showpoint << setprecision(2) << "Inital balance in Janurary: $" << balance << endl

		<< "Interest Earned: $" << intrestEarned << endl

		<< "Final Balance: $" << balance + intrestEarned;

	cin.get();
	cin.get();
}