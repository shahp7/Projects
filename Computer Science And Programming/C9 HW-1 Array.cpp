// Author: Poonam Shah  <shahp7@student.rowan.edu
// C9 HW-1-Array 
// Description: making an array to find the average below 100

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
float Deviation(float val, int size, float avg);
int GreaterThan0(float arr[], int size);
int LesthanOrEquals(float arr[], int size);
float Average(float arr[], int size);



int main()
{
	float val, arr[100];
	int size = 0;
	cout << "Enter the set of number to end the program enter -999";
	for (int i = 0; i < 100; i++)
	{
	
		cin >>val;
		if (val == -999)
			break;
		arr[i] = val;
		size++;
	}
	cout << "Number of elements in the array is : " << size << endl;
	cout << "Number of values greater than zero : " << GreaterThan0(arr, size) << endl;
	cout << "Number of values less than zero: " << LesthanOrEquals(arr, size) << endl;
	cout << "Average of values :" << Average(arr, size) << endl;
	float avg = Average(arr, size);
	for (int i = 0; i < size; i++)
	{
		
		cout << "Deviation of element " << arr[i] << " form the average :" 
			<< Deviation(arr[i], size, avg) << endl;
	}
	
	cin.get();
	cin.get();
    return 0;
}
float Deviation(float val, int size, float avg)
{
	return(val - avg) * (val - avg);
}
int GreaterThan0(float arr[], int size)
{
	int val = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] > 0)
			val++;
	return val;
}
int LesthanOrEquals(float arr[], int size)
{
	int val = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] <= 0)
			val++;
	return val;
}
float Average(float arr[], int size)
{
	float val = 0;
	for (int i = 0; i < size; i++)
		val = val + arr[i];
	return val / size;
}
