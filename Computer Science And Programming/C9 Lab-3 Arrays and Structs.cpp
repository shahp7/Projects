// Author: Poonam Shah  <shahp7@student.rowan.edu
// C9 Lab - 3 Array and Structs
// Description: making an array to find the average below 100

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
struct Employee
{
	string lastname;
	string firstname;
	string sex;
	float salary;

};

bool getEmployee(Employee& emp);
void PrintEmployee(Employee emp);
const int MAX = 5;
int main()
{
	Employee emp[MAX] = {};
	bool stillreading = true;
	int count = 0;

	do
	{
		stillreading = getEmployee(emp[count]);
		count++;
		cout << endl;
	} while (stillreading && count < MAX);
	if (!(stillreading))
		count--;
	cout << endl;

	for (int i = 0; i < count; i++)
	{
		PrintEmployee(emp[i]);
		cout << endl;
	}
	cin.get();
	cin.get();
	return EXIT_SUCCESS;
}
bool getEmployee(Employee& emp) {
	string input;
	cout << "Enter the firstname of the employee: ";
	cin >> emp.firstname;
	if (emp.firstname == "Z")
		return false;
	cout << "Enter the last name of the employee: ";
	cin >> emp.lastname;
	cout << "Enter the sex of the employee: ";
	cin >> emp.sex;
	cout << "Enter the salary of the employee: ";
	cin >> emp.salary;
	return true;
}

void PrintEmployee(Employee emp)
{
	cout << "First name: " << emp.firstname << endl;
	cout << "Last name: " << emp.lastname << endl;
	cout << "Gender: " << emp.sex << endl;
	cout << "Salary: " << fixed << setprecision(2) << emp.salary << endl;
}