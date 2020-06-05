// C7-9 Ex Students with Files.cpp : Defines the entry point for the console application.
// Author: Poonam Shah  <shahp7@student.rowan.edu
// Description: creating different type of tranigles using different symbols


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;
enum Year { Freshman, Sophomore, Junior, Senior };
string GetYearString(Year); 
struct Student
{
	string lastname;
	string firstname;
	int credit;

};
const int MAX = 10;
int main()
{
	string student, exit; 
	Year fun; 
	string files = "H:\\studnets.txt";
	student.open(files.c_str());
	getline(student, files);
	cout << "Part 1" << endl;
	for (int i = 0; i < MAX; i++)


	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

string GetYearSring (Year)
{
	
