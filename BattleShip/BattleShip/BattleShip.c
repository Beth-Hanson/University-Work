/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 6
File: BattleShip.h
Date: 07/06/18
Description: To create the game Battle Ship.*/

#include "BattleShip.h"
int manualMode(char player1Board[10][10], int row, int colm, int direction) {
	int shipLength[5] = { 2,3,3,4,5 };
	char shipSymbol[5] = { 'd','r','s','b','c' };
	char* shipName[5] = { "Destroyer", "Cruiser", "Submarine", "Battle ship", "Carrier" };
	for (int count = 0; count < 5; count++) {
		get_direction(&direction, shipName, count);
		v_or_h(direction, &row, &colm);
		place_ship(player1Board[10][10], row, colm, direction, shipLength[count], shipSymbol[count]);
	}
	return player1Board;
}

void v_or_h(int direction, int *row, int *colm) {

	if (direction == 0) {
		do {
			printf("Enter a starting row 0 - 9:\n");
			scanf("%d", row);
		} while (*row < 0 || *row > 9);
	}
	else {
		do {
			printf("Enter a starting column 0 - 9:\n");
			scanf("%d", colm);
		} while (*colm < 0 || *colm > 9);
	}
}

void get_direction(int *direction, char* name[], int count) {
	printf("Select direction for %s\n", name[count]);
	do {
		printf("Enter 1 for Horizontal or 0 for Vertical\n");
		scanf("%d", direction);
	} while (*direction != 0 && *direction != 1);
}

int displayMenu() {
	int option = 0;
	do {
		printf("Please Select from the Following:\n"
			"1) Enter ship positions manually\n"
			"2) Generate ship positions randomly\n"
			"3) Exit\n");
		scanf("%d", &option);
	} while (option != 1 && option != 2 && option != 3);
	return option;
}

void init_board(char board[10][10], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = '-';
		}
	}
}

void display_board(char board[10][10], int rows, int cols)
{
	int i, j;
	printf("  0 1 2 3 4 5 6 7 8 9\n");
	for (i = 0; i < rows; i++)
	{
		printf("%d ", i);
		for (j = 0; j < cols; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}

}

void generate_direction(int * direction)
{
	*direction = rand() % 2;
}

void generate_starting_point(int length, int direction, int * srow, int *scol)
{
	if (direction == 0) // vertical
	{
		*srow = rand() % (10 - length + 1);
		*scol = rand() % 10;
	}
	else // horizontal
	{
		*scol = rand() % (10 - length + 1);
		*srow = rand() % 10;
	}

}

void place_ship(char board[10][10], int row_start, int col_start, int dir, int length, char symbol)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		switch (dir)
		{
		case 1:  board[row_start][col_start + i] = symbol;
			break;
		case 0: board[row_start + i][col_start] = symbol;
			break;
		}
	}
}