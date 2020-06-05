// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C9-2 Lab-1 Classroom
// Description: handcoring a classroom scheduling program

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
const int ROWS = 4;
const int SEATS = 6;
int counter;
struct course
{
	int ID;
	string Title;
	string description;
};
struct student
{
	char FirstName;
	char LastName;
	float Midterm;
};
course arr[3];
void getCourse(int id);
student section[3][ROWS][SEATS];
void getStudent(int counter);
void SECTION(char first, char last, float grade);
void check(int x, int y, int z, char first, char last, float grade);
void printClass();
char first, last;
float grade;
int x, y, z;
int main()
{
	bool run = true;
	int id;
	int counter = 0;

	for (x = 0;x < 3; x++)
	{
		for (y = 0;y < ROWS; y++)
		{
			for (z = 0; z < SEATS; z++)
			{
				section[x][y][z].FirstName = '-';
				section[x][y][z].LastName = '-';
				section[x][y][z].Midterm = 0.0;
			}
		}
	}
	do
	{
		cout << "Enter a course number: ";
		cin >> id;
		getCourse(id);
		if (arr[0].ID == 123 && arr[1].ID == 456 && arr[2].ID == 789)
			run = false;
	} while (run == true);
	run = true;
	do
	{
		getStudent(counter);
		counter++;
		if (x == -1)
		{
			printClass();
			break;
		}SECTION(first, last, grade);
		printClass();
		cout << "Enter a 0 to continue or a -1 to stop: ";
		cin >> x;
		if (x == -1)
			break;
	} while (counter < 72);
	cin.get();
	cin.get();
	return 0;
}

void getCourse(int id)
{
	if (id == 123)
	{
		arr[0].ID = 123;
		cout << "Enter course title: ";
		getline(cin, arr[0].Title);
		getline(cin, arr[0].Title);
		cout << "Enter course description: ";
		getline(cin, arr[0].description);
		cin.get();
	}
	else if (id == 456)
	{
		arr[1].ID = 456;
		cout << "Enter course title: ";
		getline(cin, arr[1].Title);
		getline(cin, arr[1].Title);
		cout << "Enter course description: ";
		getline(cin, arr[1].description);
		cin.get();
	}
	else if (id == 789)
	{
		arr[2].ID = 789;
		cout << "Enter course title: ";
		getline(cin, arr[2].Title);
		getline(cin, arr[2].Title);
		cout << "Enter course description: ";
		getline(cin, arr[2].description);
		cin.get();
	}
	else
		cout << "Error - Invalid Input: ";
}

void getStudent(int counter)
{
	cout << "Enter student first initial: ";
	cin >> first;
	cout << "Enter student last initial: ";
	cin >> last;
	cout << "Enter student midterm grade: ";
	cin >> grade;
}

void SECTION(char first, char last, float grade)
{
	bool run = true;
	do
	{
		cout << "Enter section number or -1 to end: ";
		cin >> x;
		if (x == 123)
		{
			x = 0;
			run = false;
		}
		else if (x == 456)
		{
			x = 1;
			run = false;
		}
		else if (x == 789)
		{
			x = 2;
			run = false;
		}
		else if (x == -1)
			run = false;
		else
			cout << "Invalid input." << endl;
	} while (run == true);
	run = true;
	if (x != -1)
	{
		do
		{
			cout << "Enter row number: ";
			cin >> y;
			y--;
			if (y >= 0 && y < ROWS)
				run = false;
			else
				cout << "Invalid imput" << endl;
		} while (run == true);
		run = false;
		do
		{
			cout << "Enter seat number: ";
			cin >> z;
			z--;
			if (z >= 0 && z < SEATS)
				run = false;
			else
				cout << "Invalid imput" << endl;
		} while (run == true);
		check(x, y, z, first, last, grade);
	}
	run = true;
}

void check(int x, int y, int z, char first, char last, float grade)
{
	if (x != -1)
	{
		if (section[x][y][z].FirstName == '-')
		{
			section[x][y][z].FirstName = first;
			section[x][y][z].LastName = last;
			section[x][y][z].Midterm = grade;
		}
		else
		{
			cout << "Invalid spot already in use" << endl;
			SECTION(first, last, grade);
		}
	}
}

void printClass()
{
	for (x = 0;x < 3; x++)
	{
		float sum = 0.0, average;
		int count = ROWS * SEATS;
		cout << "For class " << arr[x].ID << "." << endl;
		cout << "Topic: " << arr[x].Title << endl;
		cout << "Description: " << arr[x].description << endl;
		for (y = 0;y < ROWS; y++)
		{
			for (z = 0; z < SEATS; z++)
			{
				cout << setw(5) << section[x][y][z].FirstName << section[x][y][z].LastName << setprecision(2) << fixed << showpoint << section[x][y][z].Midterm;
				if (section[x][y][z].Midterm == 0.0)
					count--;
				else
					sum += section[x][y][z].Midterm;
			}
			cout << endl;
		}
		if (sum == 0)
			average = 0;
		else
			average = sum / count;
		cout << "Section Average is " << setprecision(2) << fixed << showpoint << average << endl << endl;
	}
}