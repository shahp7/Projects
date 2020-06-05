// Lab Final Matrix (File).cpp : Defines the entry point for the console application.
// Description: handcoring a classroom scheduling program
// Author: Poonam Shah  <shahp7@student.rowan.edu>

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;


int main()
{
	ifstream fun;
	ofstream out;
	string files = "H:\\excel.txt";
	fun.open(files.c_str());
	getline(fun, files);
	while (!fun.eof())
	{
		cout << files << endl;
		getline(fun, files);
	}
	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

