// C7 HW-1 Chess.cpp : Defines the entry point for the console application.
// Author: Poonam Shah  <shahp7@student.rowan.edu
// Description: fidning how many moves are going to take in a game 

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;
enum pieceType
{
	king,
	queen,
	rook,
	bishop,
	knight,
	pawn,
	None
};
enum colorType
{
	black,
	white,
	none
};
pieceType getpieceTypeEnum(string piece);
string getpieceTypeString(pieceType pieceEnum);
colorType getColorEnum(string color);
string getColorString(colorType colorEnum);

struct square { pieceType pt; colorType pieceColor; };
struct point { int row; int col; };

square buildSquare(string, string);
void printSquare(square);
void printBoard(square board[8][8]);
bool readPosition(int&, int&);


int main()
{	//Program Starts
	square board[8][8];
	int x;
	int y;
	int newx;
	int newy;

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (i == 0)
			{
				if (j == 0)
					board[i][j] = buildSquare("RK", "W");
				else if (j == 1)
					board[i][j] = buildSquare("KN", "W");
				else if (j == 2)
					board[i][j] = buildSquare("BP", "W");
				else if (j == 3)
					board[i][j] = buildSquare("KG", "W");
				else if (j == 4)
					board[i][j] = buildSquare("QN", "W");
				else if (j == 5)
					board[i][j] = buildSquare("BP", "W");
				else if (j == 6)
					board[i][j] = buildSquare("KN", "W");
				else if (j == 7)
					board[i][j] = buildSquare("RK", "W");
			}
			if (i == 1)
			{
				board[i][j] = buildSquare("PN", "W");
			}
			if (i > 1 && i < 6)
			{
				board[i][j] = buildSquare("--", "-");
			}
			if (i == 6)
			{
				board[i][j] = buildSquare("PN", "B");
			}
			if (i == 7)
			{
				if (j == 0)
					board[i][j] = buildSquare("RK", "B");
				else if (j == 1)
					board[i][j] = buildSquare("KN", "B");
				else if (j == 2)
					board[i][j] = buildSquare("BP", "B");
				else if (j == 3)
					board[i][j] = buildSquare("KG", "B");
				else if (j == 4)
					board[i][j] = buildSquare("QN", "B");
				else if (j == 5)
					board[i][j] = buildSquare("BP", "B");
				else if (j == 6)
					board[i][j] = buildSquare("KN", "B");
				else if (j == 7)
					board[i][j] = buildSquare("RK", "B");
			}

		}
	}

	printBoard(board);
	bool test;

	do
	{
		cout << "Which piece to move" << endl;
		test = readPosition(x, y);
		cout << "Where to move piece" << endl;
		readPosition(newx, newy);
		cout << getpieceTypeString(board[x - 1][y - 1].pt) << " (" << x << "," << y << ") moved to (" << newx << "," << newy << ") captured " << getpieceTypeString(board[newx - 1][newy - 1].pt) << endl;
		board[newx - 1][newy - 1] = board[x - 1][y - 1];
		board[x - 1][y - 1] = buildSquare("--", "-");
		printBoard(board);
	} while (test);




	cin.get();
	cin.get();
	return EXIT_SUCCESS;
}
pieceType getpieceTypeEnum(string piece)
{
	if (piece == "KG")
	{
		return king;
	}
	else if (piece == "QN")
	{
		return queen;
	}
	else if (piece == "RK")
	{
		return rook;
	}
	else if (piece == "BP")
	{
		return bishop;
	}
	else if (piece == "KN")
	{
		return knight;
	}
	else if (piece == "PN")
	{
		return pawn;
	}
	else
	{
		return None;
	}
}
string getpieceTypeString(pieceType pieceEnum)
{
	switch (pieceEnum)
	{
	case king:
		return "KG";
	case queen:
		return "QN";
	case rook:
		return "RK";
	case bishop:
		return "BP";
	case knight:
		return "KN";
	case pawn:
		return "PN";
	case None:
		return "--";
	}
}
colorType getColorEnum(string color)
{
	if (color == "B")
	{
		return black;
	}
	else if (color == "W")
	{
		return white;
	}
	else
	{
		return none;
	}
}
string getColorString(colorType colorEnum)
{
	switch (colorEnum)
	{
	case black:
		return "B";
	case white:
		return "W";
	case none:
		return "--";
	}
}
square buildSquare(string pieceString, string colorString)
{
	square block;
	block.pt = getpieceTypeEnum(pieceString);
	block.pieceColor = getColorEnum(colorString);

	return block;
}
void printSquare(square block)
{
	cout << getColorString(block.pieceColor) << getpieceTypeString(block.pt);
}
void printBoard(square board[8][8])
{
	for (int i = 0; i < 8; i++)
	{
		cout << endl;

		for (int j = 0; j < 8; j++)
		{
			printSquare(board[i][j]);
			cout << " ";
		}
	}
	cout << endl;
}
bool readPosition(int& x, int&y)
{
	cout << "Enter an x to move: ";
	cin >> x;

	if (x == -1)
	{
		return false;
	}
	cout << "Enter a y to move: ";
	cin >> y;

	return true;
}
