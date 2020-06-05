
// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C6 HW-1 Avg.cpp 
// Description: finding the average, and sum of a group of numbers 


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

void getStats();
int sum = 0, max, min, totalCount = 0, num;


int main() {
	cout << "Enter a number: " << endl;
	getStats();
	cout << "Sum: " << sum << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	
	
	float average = (float)sum / (float)totalCount;
	cout << "Average: " << average << endl; 
	cin.get();
	cin.get();
	return EXIT_SUCCESS;
}


void getStats() {
	
	while (1) {
		cin >> num;
		if (num == 0)
			break;
		sum = sum + num;

		totalCount = totalCount + 1;

		
		if (totalCount == 1) {
			max = num;
			min = num;
		}


		else {
			if (max < num) {
				max = num;
			}

			if (min > num) {
				min = num;
			}
		}
	}
}