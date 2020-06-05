// C7-2 Lab-1 Tic_Tac_Toe.cpp
// Author: Poonam Shah  <shahp7@student.rowan.edu
// Description: fidning how many moves are going to take in a game 

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int a;
struct point
{
	int row;
	int col;
};
enum square { Empty, X, O };
square getSquareEnum(string);
string getSquareString(square);
bool getValidint(int);
point getPoint();
void getboard(square board[3][3]);
bool checkwin(square board[3][3], square player);
int main()
{
	string shape;
	square board[3][3] = { Empty };
	square shapeEnum = getSquareEnum(shape);
	string shapeString = getSquareString(shapeEnum);
	getboard(board);
	square player;
	for (int turn = 0; turn, 9; turn++)
	{
		if (turn % 2 == 0)
		{
			player = X;
			cout << "Player X enter a point" << endl;
		}
		else
		{
			player = O;
			cout << "Player O enter a point" << endl;
		}

		point position = getPoint();

		while (board[position.row - 1][position.col - 1] != Empty)
		{
			cout << "Error space occupied" << endl;
			position = getPoint();
		}
		board[position.row - 1][position.col - 1] = player;
		getboard(board);

		if (checkwin(board, player) == true)
		{
			cout << "Player " << getSquareString(player) << endl;
			break;
		}
	}
	cin.get();
	cin.get();
	return 0;
}

square getSquareEnum(string shape)
{
	if (shape == "X")
	{
		return X;
	}
	else if (shape == "O")
		return O;
	else
		return Empty;
	return square();
}

string getSquareString(square shapeEnum)
{
	switch (shapeEnum)
	{
	case X:
		return "X";
	case O:
		return "O";
	case Empty:
		return " ";
	}
}

bool getValidint(int tempint)
{
	if (tempint < 1 || tempint>3)
	{
		cout << "Invalid integer" << endl;
		return false;
	}
	else
		return true;
}

point getPoint()
{
	point Square;
	do
	{
		cout << "Enter a row value: ";
		cin >> Square.row;
	} while (getValidint(Square.row) == false);
	do
	{
		cout << "Enter a column value: ";
		cin >> Square.col;
	} while (getValidint(Square.col) == false);
	return Square;
}

void getboard(square board[3][3])
{
	for (int i = 0;i < 3; i++)
	{
		cout << endl;
		for (int j = 0; j < 3; j++)
		{
			cout << getSquareString(board[i][j]);
			if (j != 2)
				cout << "|";
		}
	}
	cout << endl << endl;
}

bool checkwin(square board[3][3], square player)
{
	int rowcheck = 0;
	int colcheck = 0;

	for (int i = 0; i < 3;i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (board[i][j] == player)
				rowcheck++;
			if (rowcheck == 3)
				return true;
		}
	}
	for (int j = 0; j < 3; j++)
	{
		for (int i = 0; i < 3; i++)
		{
			if (board[i][j] == player)
				colcheck++;
			if (colcheck == 3)
				return true;
		}
	}
	if (board[0][0] == player&&board[1][1] == player&&board[2][2] == player)
		return true;
	if (board[0][2] == player&&board[1][1] == player&&board[2][0] == player)
		return true;
	return false;
}