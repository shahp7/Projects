// Chapter 8 cheat cheat.cpp : Defines the entry point for the console application.
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
int main()
{
	ifstream fun; 
	ofstream out;
	string files = "H:\\Documents\\Visual Studio 2015\\Projects\\C4 Lab-2 Max\\C4 Lab-2 Max\\C4 Lab-2 Max.cpp";
	fun.open(files.c_str());
	getline(fun, files);
	while (! fun.eof())
	{
		cout << files << endl;
		getline(fun, files);
	}
	{

		
		string fileout = "H:\\Documents\\Visual Studio 2015\Projects\\fileout\\fileout.cpp ";
	fun.open(fileout.c_str());
		getline(fun, fileout);
		while (!fun.eof())
		{
			out << fileout << endl;
			getline(fun, fileout);
		}
	}

	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

