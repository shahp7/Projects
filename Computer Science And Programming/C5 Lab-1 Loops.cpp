// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C5 lab-1 Loops
// Description: creating a loop statement




#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;


int main()

{
	int first, last, ForLoop, WhileLoop, DoWhileLoop, step;

	cout << "Enter the start number:  ";
	cin >> first;
	cout << "Enter the stop number:  ";
	cin >> last;
	cout << "Enter the step number:  "; 
	cin >> step; 
	cout << "As a for - loop:  " << endl;
	for (ForLoop = first;
		ForLoop <= last;
		ForLoop++)
	{
		cout << ForLoop << " ";

	}

		cout << endl;
		cout << "As a while-loop:  " << endl;
		WhileLoop = first;
		while (WhileLoop <= last)

		{
			cout << WhileLoop << " ";
			WhileLoop++;
		}

			cout << endl;
			cout << "As a do-while-loop:  " << endl;
			DoWhileLoop = first;
			do

			{

				cout << DoWhileLoop << " ";
				DoWhileLoop++;
			} while (DoWhileLoop <= last);
	

			cout << endl;
			cout << "As a for - loop:  " << endl;
				for (ForLoop = first;
					ForLoop <= last;
					ForLoop+=step)
				{
					cout << ForLoop << " ";

				}

				cout << endl;
				cout << "As a while-loop:  " << endl;
				WhileLoop = first;
				while (WhileLoop <= last)

				{
					cout << WhileLoop << " ";
					WhileLoop += step;
				}

				cout << endl;
				cout << "As a Do-while-loop:  " << endl;
				DoWhileLoop = first;
				do

				{

					cout << DoWhileLoop << " ";
					DoWhileLoop+=step;
				} while (DoWhileLoop <= last);
			
	cin.get();
	cin.get(); 

	return EXIT_SUCCESS; 
}

