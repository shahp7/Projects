// C12 Lab-1 Towers of Hanoi.cpp : Defines the entry point for the console application.
// Author: Poonam Shah  <shahp7@student.rowan.edu
// Description: finding how many moves are going to take in a game 

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
void TOH(int n, char Sour, char Aux, char Des);
int steps = 0;
int main()
{
		int n;
		while (1) {
			steps = 0;
			cout << "Enter number of disks:";
			cin >> n;
			if (n == -1)
				break;
			TOH(n, 'A', 'B', 'C');
			cout << "Total number of steps: " << steps << endl;
		}

	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}


void TOH(int n, char Sour, char Aux, char Des)
{
	steps++;
	if (n == 1)
	{
		cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
		return;
	}

	TOH(n - 1, Sour, Des, Aux);
	cout << "Move Disk " << n << " from " << Sour << " to " << Des << endl;
	TOH(n - 1, Aux, Sour, Des);

}