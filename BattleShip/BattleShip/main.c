/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 6
File: BattleShip.h
Date: 07/06/18
Description: To create the game Battle Ship.*/

#include "BattleShip.h"

int main() {
	char board[10][10];
	int direction, row, col, option;
	int shipLength[5] = { 2,3,3,4,5 };
	char shipSymbol[5] = { 'd','r','s','b','c' };
	char* shipName[5] = { "Destroyer", "Cruiser", "Submarine", "Battle ship", "Carrier" };
	srand((unsigned int)time(NULL));
	
	/*printf("Battle Ship \n"
		"Rules:\n"
		"1) This is a two player game\n"
		"2) Player 1 is you and Player 2 is the computer\n"
		"3) Each Player gets five ships\n"
		"	- Carrier with 5 slots\n"
		"	- Battleship with 4 slots\n"
		"	- Submarine with 3 slots\n"
		"	- Destroyer with 2 slots \n"
		"4) Once the ships are placed on the board, they cannot be moved. \n"
		"Each Player attempts to hit the other Player's ships by guessing their place on the board. \n"
		"5) x for hit. m for miss. First Player to sink all five ships wins. \n"
		"Press Enter to start the game\n");
	system("pause");
	system("cls");
	option = displayMenu();
	switch (option) {
	case 1:
		//Manual
		break;
	case 2:
		//Random
		break;
	}*/
	
	get_direction(&direction, shipName, 0);
	printf("direction: %d\n", direction);
	v_or_h(direction, &row, &col);
	printf("row: %d \ncol: %d \n", row, col);

	init_board(board, 10, 10);
	display_board(board, 10, 10);

	// code to place the battleship
	generate_direction(&direction);
	printf("Direction: %d\n", direction);

	// don't forget some code to make sure we are not placing a ship on top of another ship!!
	generate_starting_point(4, direction, &row, &col);
	printf("row: %d col: %d\n", row, col);

	// next step, place the ship
	// fill in the 4 'b's in the board based on direction
	place_ship(board, row, col, direction, 4, 'b');
	display_board(board, 10, 10);
	system("pause");
	return 0;
}