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

int countForm(int first, int last, int step, int time); 

int main()

{
	int first, last, ForLoop, WhileLoop, DoWhileLoop, step, times;
	float count;
	
	cout << "Enter the start number:  ";
	cin >> first;
	cout << "Enter the stop number:  ";
	cin >> last;
	cout << "Enter the step number:  ";
	cin >> step;
	times = 0;
	cout << endl;
	cout << "Count:  " << endl;
	cout << "As a for - loop:  " << endl;

	for (ForLoop = first;
		ForLoop <= last;
		ForLoop += step)
	{
		cout << ForLoop << " ";
		times++;
	}
	cout << endl;
	cout << "This loop ran " << times << " times" << endl;
	cout << endl; 
	cout << "As a while-loop:  " << endl;
	WhileLoop = first;
	times = 0;
	while (WhileLoop <= last)

	{
		cout << WhileLoop << " ";
		WhileLoop += step;
		times++;
	}
	cout << endl;
	cout << "This loop ran " << times << " times" << endl;
	cout << endl;
	cout << "As a do-while-loop:  " << endl;
	DoWhileLoop = first;
	times = 0;
	do

	{

		cout << DoWhileLoop << " ";
		DoWhileLoop += step;
		times++;
	} while (DoWhileLoop <= last);
	cout << endl; 
	cout << "This loop ran " << times << " times" << endl;
	cout << endl;
	int countForm(int first, int last, int step, int times);

	cout << "Formula:  " << endl;

	cout << "As a for - loop:  " << endl;

		for (ForLoop = first;
			ForLoop <= last;
			ForLoop += step)
		{
			cout << ForLoop << " ";
			
		}
		cout << endl;
		cout << "This loop ran " << times << " times" << endl;
		cout << endl;
		cout << "As a while-loop:  " << endl;
		WhileLoop = first;
		
		while (WhileLoop <= last)

		{
			cout << WhileLoop << " ";
			WhileLoop += step;
			
		}
		cout << endl;
		cout << "This loop ran " << times << " times" << endl;
		cout << endl;
		cout << "As a do-while-loop:  " << endl;
		DoWhileLoop = first;
		
		do

		{
			cout << DoWhileLoop << " ";
			DoWhileLoop += step;
			
		} while (DoWhileLoop <= last);
		cout << endl;
		cout << "This loop ran " << times << " times" << endl;
	
	cin.get();
	cin.get();
	return EXIT_SUCCESS;

}

int countForm(int first, int last, int step, int time)
{
	int count = last - first + 1;
	     count / step;
	     ceil(count);
		 count++; 
	return 0;
}
