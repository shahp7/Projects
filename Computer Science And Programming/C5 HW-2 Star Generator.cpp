
// Author: Poonam Shah  <shahp7@student.rowan.edu>
// / C5 HW-2 Star Generator.cpp 
// Description: creating different type of tranigles using different symbols


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
void printStars(int count); 
void printChars(int num, char character); 
void printJeff(int row, char chara); 
int main()
{
	int stars, count =0, num, chara, row;
	char symbols;
	cout << "Enter the number of stars:  " ;
	cin >> stars;
	printStars(stars);
	cout << endl;
	cout << "Enter the number of stars:  ";
	cin >> stars; 
	printStars(stars);
	cout << endl;

	cout << "Enter a charater:  ";
	cin >> symbols; 
	cout << " Enter the number of times to print:  ";
	cin >> num; 
	printChars(num, symbols);
	cout << endl; 

	cout << "Enter a charater:  ";
	cin >> symbols;
	cout << " Enter the number of times to print:  ";
	cin >> num;
	printChars(num, symbols);
	cout << endl;

	cout << "Enter a character: ";
	cin >> symbols; 
	cout << "Enter the numer of rows to print:  ";
	cin >> row; 
	printJeff(row, symbols);
	cout << endl; 

	cout << "Enter a character: ";
	cin >> symbols;
	cout << "Enter the numer of rows to print:  ";
	cin >> row;
	printJeff(row, symbols);
	cout << endl;
	cin.get();
	cin.get();

	return EXIT_SUCCESS;
}
	void printStars(int count)
	{ 
		if (count > 0) cout << endl;

		for (int i = 1; i <= count; i++)
			cout << "*";
	}

	void printChars(int num, char character)
	{

		for (int i = 1; i <= num; i++)
		{

			cout << character << " ";

		}

	}

	void printJeff(int row, char chara)
	{
		cout << "Southwest:  " << endl;
		for (int i = 1; i <= row; i++)
		{
			for (int j = 0; j < i; j++)
			{
				cout << chara << " ";

			}
			cout << endl; 
		}
		cout << "Northwest: " << endl;
		for (int i = -1; i < row - 1; i = i++)
		{
			for (int j = i + 1; j < row; j++)
			{
				cout << chara << " ";
			}
			cout << endl; 
		}
		cout << "Southeast: " << endl; 
		for (int i = 1; i <= row; i++)
		{
			for (int k = 1; k <= (row-i); k++)
			{
				cout << "  ";
			}
			for (int j = 0; j < i; j++)
			{
				cout << chara << " ";

			}
			cout << endl;
		}
		cout << "Northeast: " << endl;
		for (int i = 1; i <= row; i++)
		{
			for (int j = 1; j < i; j++)
			{
				cout << "  ";
			}
			for (int k = 0; k <= (row - i); k++)
			{
				cout << chara << " ";

			}
			cout << endl;
		}
	}
