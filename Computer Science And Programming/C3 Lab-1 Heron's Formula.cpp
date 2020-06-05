// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C3 Lab-1 Heron's Formula
// Description: three sides oof a triangle
// Written:  September, 20 2017
//Last Updated: September, 20 2017



#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath> 
float getSemiParimeter(float a, float b, float c);
float getHeronArea(float a, float b, float c);
using namespace std;


int main()
{
	float a, b, c;
	cout << "Enter the first side:  "; 
	cin >> a;
	cout << "Enter the second side:   ";
	cin >> b;
	cout << "Enter the third side:   ";
	cin >> c;

	cout << "The area of this triangle is " << getHeronArea(a, b, c);
	
	cin.get();
	cin.get();

    return EXIT_SUCCESS;
}

float getSemiParimeter(float a, float b, float c)
{
	float s;
	 s = (a + b + c) / 2;
	 return s; 
}

float getHeronArea(float a, float b, float c)
{
	float s, A;
	s = getSemiParimeter(a, b, c); 
	A = sqrt(s *(s - a)*(s - b)*(s - c));
	return A; 
}
