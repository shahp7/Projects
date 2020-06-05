// C8 HW-1 Files.cpp : 
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
		ifstream in("H:\\Documents\\Visual Studio 2015\\Projects\\C8 Read File\\Project\\HW_C8_File_datafile.txt");
		ifstream fun;
		string files = "H:\\Documents\\Visual Studio 2015\\Projects\\C8 Write File\\Project\\HW_C8_File_document.txt ";
		char ch; 
		int count = 0;
		while (in.get(ch)) {
			if (ch == 'a') {
				count++;
			}
			else if (ch == 'A') {
				count++;
			}
		}
		cout << "Number of a's in file is " << count << endl;

	cout << "Part 2 " << endl; 
	

	cin.get();
	cin.get();
    return EXIT_SUCCESS;
}

