// Author: Poonam Shah  <shahp7@student.rowan.edu
// C9 Lab - 3 Array and Structs
// Description: making an array to find the average below 100

#include "stdafx.h" 
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>
#include <iomanip>
	using namespace std;


	struct Employee
	{
		string lastname;

		string firstname;

		string sex;

		float salary;
	};

	bool getEmployee(Employee& emp, ifstream& file);

	void printEmployee(Employee emp);

	void WriteEmployee(ofstream& newfile, Employee emp);

	const int MAX = 3;

	int main()
	{
		ifstream file ("H:\\Documenta\\Visual Studio 2015\\Project\\fileout\\L1_C8_Employees.txt");
		ofstream newfile("H:\\Documents\\Visual Studio 2015\\Projects\\L1_C8_Employees_Output\\L1_C8_Employees_Output.txt");

		Employee emp[MAX] = {};

		bool stillreading;

		int count = 0;

		do
		{
			stillreading = getEmployee(emp[count], file);

			count++;

			
		} while (stillreading && count < MAX);

		if (!(stillreading))
			count--;

		cout << endl;

		for (int i = 0; i < count; i++)
		{
			WriteEmployee(newfile, emp[i]);
		}
		newfile.close();


		cin.get();
		cin.get();
		return EXIT_SUCCESS;
	}

	bool getEmployee(Employee& emp, ifstream& file) {

		file >> emp.firstname;

		if (file.eof())
			return false;
		else {
			string input;
			file >> emp.lastname;
			file >> input;
			emp.sex = input;
			file >> emp.salary;
			return true;
		}


	}


	void printEmployee(Employee emp)
	{

		cout << "First name: " << emp.firstname << endl;
		cout << "Last name:  " << emp.lastname << endl;
		cout << "Gender:     " << emp.sex << endl;
		cout << "Salary:     " << fixed << setprecision(2) << emp.salary << endl;
	}

	void WriteEmployee(ofstream& newfile, Employee emp)
	{
		newfile << "First name: " << emp.firstname << endl;
		newfile << "Last name:  " << emp.lastname << endl;
		newfile << "Gender:     " << emp.sex << endl;
		newfile << "Salary:     " << fixed << setprecision(2) << emp.salary << endl;
		newfile << endl << endl;
	}