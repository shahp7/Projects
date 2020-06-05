// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C3 lab 2 Gosper
// Description: fidninga the value of n using grosper funnction 
// Written: September, 20, 2017
// Last Updated : September, 20 2017. 

#include "stdafx.h"
#include "math.h"
#include <string>
#include <iostream>
#include <iomanip>
using namespace std;



const double PI = 3.141592654;
int main()
{
	int n;

	double intermediateValue1;
	double intermediateValue2;

	cout << "Enter non-negative integer value (<8): "   ;

	cin >> n;

	double newN = (double)n; 

	intermediateValue1 = 2 * newN + 1.0 / 3.0; 

	cout << " Intermediate value, 2n+1/3:  " << intermediateValue1 << endl;

	intermediateValue2 = sqrt(intermediateValue1*PI);

	cout << " Intermediate value , sqrt ((2n+1/3)*PI):  " << intermediateValue2 << endl;

	cout << n << " ! equals approximately " << setprecision (9) << pow(n, (double)n) * exp(-(double)n)*intermediateValue2;


	cin.get();
	cin.get();

	return EXIT_SUCCESS;
}

