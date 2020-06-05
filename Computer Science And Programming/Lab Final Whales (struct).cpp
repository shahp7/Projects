// Lab Final Whales (struct).cpp : Defines the entry point for the console application.
// Author: Poonam Shah  <shahp7@student.rowan.edu
// Description: mapping out whales on the world map

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

struct Ocean
{
	string Name;
	int CurrentCount;
	int PredictedCount;
};
const int MAX = 5;
Ocean WorldOcean[MAX];
void Input();
int Update(int i);
void FinalReport();
int main()
{
	WorldOcean[0].Name = "Atlantic Ocean";
	WorldOcean[1].Name = "Artic Ocean";
	WorldOcean[2].Name = "Indian Ocean";
	WorldOcean[3].Name = "Pacific Ocean";
	WorldOcean[4].Name = "Southern Ocean";
	bool run = true;
	for (int i = 0; i < MAX; i++)
	{
		WorldOcean[i].CurrentCount = 0;
		WorldOcean[i].PredictedCount = 0;
	}
	do
	{
		Input();
		cin.get();
		if (WorldOcean[0].CurrentCount != 0 && WorldOcean[1].CurrentCount != 0 && WorldOcean[2].CurrentCount != 0 && WorldOcean[3].CurrentCount != 0 && WorldOcean[4].CurrentCount != 0)
			run = false;
	} while (run == true);
	FinalReport();
	cin.get();
	cin.get();
	return 0;
}

void Input()
{
	string name;
	cout << "Enter an ocean: ";
	getline(cin, name);
	if (name == WorldOcean[0].Name)
	{
		if (WorldOcean[0].CurrentCount == 0)
		{
			cout << "Enter the current count of whales: ";
			cin >> WorldOcean[0].CurrentCount;
			WorldOcean[0].PredictedCount = Update(WorldOcean[0].CurrentCount);
		}
		else
		{
			cout << "Already entered data about this ocean." << endl;
			Input();
		}
	}
	else if (name == WorldOcean[1].Name)
	{
		if (WorldOcean[1].CurrentCount == 0)
		{
			cout << "Enter the current count of whales: ";
			cin >> WorldOcean[1].CurrentCount;
			WorldOcean[1].PredictedCount = Update(WorldOcean[1].CurrentCount);
		}
		else
		{
			cout << "Already entered data about this ocean." << endl;
			Input();
		}
	}
	else if (name == WorldOcean[2].Name)
	{
		if (WorldOcean[2].CurrentCount == 0)
		{
			cout << "Enter the current count of whales: ";
			cin >> WorldOcean[2].CurrentCount;
			WorldOcean[2].PredictedCount = Update(WorldOcean[2].CurrentCount);
		}
		else
		{
			cout << "Already entered data about this ocean." << endl;
			Input();
		}
	}
	else if (name == WorldOcean[3].Name)
	{
		if (WorldOcean[3].CurrentCount == 0)
		{
			cout << "Enter the current count of whales: ";
			cin >> WorldOcean[3].CurrentCount;
			WorldOcean[3].PredictedCount = Update(WorldOcean[3].CurrentCount);
		}
		else
		{
			cout << "Already entered data about this ocean." << endl;
			Input();
		}
	}
	else if (name == WorldOcean[4].Name)
	{
		if (WorldOcean[4].CurrentCount == 0)
		{
			cout << "Enter the current count of whales: ";
			cin >> WorldOcean[4].CurrentCount;
			WorldOcean[4].PredictedCount = Update(WorldOcean[4].CurrentCount);
		}
		else
		{
			cout << "Already entered data about this ocean." << endl;
			Input();
		}
	}
	else if (name != WorldOcean[0].Name&&name != WorldOcean[1].Name&&name != WorldOcean[2].Name&&name != WorldOcean[3].Name&&name != WorldOcean[4].Name)
	{
		cout << "Invalid Input." << endl;
		Input();
	}
}

int Update(int i)
{
	return 1.05 * i;
}

void FinalReport()
{
	for (int i = 0; i < MAX;i++)
	{
		cout << "For the " << WorldOcean[i].Name << ":" << endl;
		cout << "Current Count:" << setw(10) << WorldOcean[i].CurrentCount << endl;
		cout << "Predicted Count:" << setw(8) << WorldOcean[i].PredictedCount << endl;
		cout << "Increase:" << setw(15) << WorldOcean[i].PredictedCount - WorldOcean[i].CurrentCount << endl << endl;
	}
}