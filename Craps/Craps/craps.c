/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project
File: craps.c
Date: 06/20/18
Description: Game of Chance */
#include "craps.h"

/*
Function: print_game_rules ()
Description: prints rules of the game
Input parameters:
Returns:
Preconditions:
Postconditions:
*/
void print_game_rules(void) {
	printf("Roll Two Dice. The dice are summed. \n"
		"First Roll: the sum is 7 or 11. You win. \n"
		"The sum is 2, 3 or 12. You lose. \n"
		"Any other sum becomes your 'point'. \n"
		"Roll until you make your 'point'. \n"
		"Roll a 7 before your 'point'. You lose.");
}

/*
Function: get_bank_balance ()
Description: Prompts user for Initial Bank balance used for game
Input parameters:
Returns: bank balance
Preconditions:
Postconditions: bank balance
*/
double get_bank_balance(void) {
	double bankBalance = 0;
	printf("Enter Initial Bank Balance for Wagering: ");
	scanf("%lf", &bankBalance);
	return bankBalance;
}

/*
Function: get_wager_amount ()
Description: prompts user for wager amount
Input parameters:
Returns: wager
Preconditions:
Postconditions: wager amount
*/
double get_wager_amount(void) {
	double wager;
	printf("Enter Wager Amount: ");
	scanf("%lf", &wager);
	return wager;
}

/*
Function: check_wager_amount ()
Description: if statement cross-referencing wager with balance to determine validity
Input parameters: double for wager, double for balance
Returns: 1 or 0 depending on truth of statement
Preconditions: balance and wager must have value
Postconditions: Redundant
*/
int check_wager_amount(double wager, double balance) {
	if (wager > balance) {
		return 0;
	}
	if (wager <= balance) {
		return 1;
	}
}

/*
Function: roll_die ()
Description: rand function to generate a random int between 0 and 5. Add 1 to shift to between 1 and 6.
Input parameters: Redundant
Returns: random int plus 1
Preconditions: Redundant.
Postconditions: a random int between 1 and 6. 
*/
int roll_die(void) {
	int die = rand() % 6;
	return die + 1;
}

/*
Function: calculate_sum_dice ()
Description: sums two dice integers
Input parameters: int die1 value, int die2 value
Returns: sum of dice
Preconditions: die 1 and 2 must have value
Postconditions: sum value
*/
int calculate_sum_dice(int die1_value, int die2_value) {
	int sum = die1_value + die2_value;
	return sum;
}

/*
Function: is_win_loss_or_point ()
Description: if statement determines next step in game
Input parameters: integer sum of dice
Returns: 1, 0, or -1;
Preconditions: sum of dice must have value
Postconditions: win, loss, or point
*/
int is_win_loss_or_point(int sum_dice) {
	if (sum_dice == 7 || sum_dice == 11) {
		return 1;
	}
	else if (sum_dice == 2 || sum_dice == 3 || sum_dice == 12) {
		return 0;
	}
	else {
		return -1;
	}
}

/*
Function: is_point_loss_or_neither ()
Description: if statment determines win, loss, or neither
Input parameters: sum of dice and point value
Returns: 1, 0, or -1
Preconditions:
Postconditions:
*/
int is_point_loss_or_neither(int sum_dice, int point_value) {
	if (sum_dice == point_value) {
		return 1;
	}
	else if (sum_dice == 7) {
		return 0;
	}
	else {
		return -1;
	}
}

/*
Function: adjust_bank_balance ()
Description: if statement adjusts bank balance on game play
Input parameters: bank balance, wager, add or subtract
Returns: bank balance
Preconditions:
Postconditions: 
*/
double adjust_bank_balance(double bank_balance, double wager_amount, int add_or_subtract) {
	if (add_or_subtract == 1) {
		bank_balance += wager_amount;
	}
	else if (add_or_subtract == 0) {
		bank_balance -= wager_amount;
	}
	return bank_balance;
}

/*
Function: chatter_messages()
Description: prints status of game so far
Input parameters: number of rolls, win, loss or neither, initial bank balace and current bank balance
Returns: 
Preconditions: 
Postconditions:
*/
void chatter_messages(int number_rolls, int win_loss_neither, double initial_bank_balance, double current_bank_balance) {
	printf("Number of rolls: %d \n Initial Bank Balance: %lf \n Bank Balance: %lf \n", number_rolls, initial_bank_balance, current_bank_balance);
	switch (win_loss_neither) {
	case 1:
		printf("Player Wins \n");
		break;
	case 0:
		printf("Player Loses \n");
		break;
	case -1:
		printf("Point. Try again \n");
		break;
	}
	
}