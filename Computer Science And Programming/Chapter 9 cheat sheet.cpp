// Chapter 9 cheat sheet.cpp : Defines the entry point for the console application.
//

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
	{
		ofstream out;
		string fileout = " ";
		out.open(fileout.c_str());
		getline(out, fileout);
		while (! out.eof())
		{
			out << fileout << endl;
			getline(out, fileout);
		}
		cin.get();
		cin.get();
    return EXIT_SUCCESS;
}

