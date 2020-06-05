// Author: Poonam Shah  <shahp7@student.rowan.edu>
// C5 HW-1 Super Bowl Bound
// Description: determine if your team wins at 10 games or more. 

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std; 
int games();
int calculation();
int cot1 = 0, win1, win2, loss1, score1, scoreOpposition, average;

char addWin = 'W', addLoss = 'L', result1;

int main()
{
	cout << games() << endl;
	cout << calculation();
	return 0;

}

int games()
{
	while (cot1 < 16) {
		cot1++;
		cout << "Enter the score of the Balitmore Ravnes: " << endl;
		cout << "Ravens: " ;
		cin >> score1;
		cout << endl;
		cout << "Enter the score of the oppoennt Team: " << endl;
		cout << "Oppoennt: " ;
		cin >> scoreOpposition;

		if (scoreOpposition < score1)
			win1++;
		else
			loss1++;
		cout << " Wins  " << win1 << " Losses " << loss1 << endl << endl;
	}
	return cot1;
}

int calculation()
{
	cout << endl; 
	cout << "Team Baltimore Ravens: Final Record " << endl;
	cout << "____________________________________"; 
	cout << endl << endl;
	cout << "Games Won:  " << win1 << endl; 
	cout << "Games Lose:  " << loss1 << endl;
	cout << endl << endl;
	cout << "Winning Percentage: " << (float(win1) / 10.0) * 100 << "%"  << endl;
	
	average = (win1 - loss1);

	if (average > 10)
		cout << "You made the playoffs! Super bowl here we come" << endl;
	if (average <= 10)
	cout << "You did not make the playoffs! Its time to eat some ice cream and cried" << endl;
	

	cin.get();
	cin.get();
	return EXIT_SUCCESS;
}