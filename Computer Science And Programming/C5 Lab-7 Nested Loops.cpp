// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C5 Lab-7 Nested Loops
// Description: Create a global variable int MAX (set to 4 for discussion below).


#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
int const MAX = 4; 
int main()
{
	cout << setw(12) << "i" << setw(6) << "j" << endl; 
	for (int i = 0; i < MAX; i++)
	{
		cout << "Outer" << setw(7) << i << endl; 
		for (int j = 0; j < i; j++)
			cout << "   Inner" << setw(10) << j << endl; 
	}
	cin.get();
	cin.get(); 
    return EXIT_SUCCESS;
}

