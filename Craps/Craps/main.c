/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project
File: main.c
Date: 06/20/18
Description: Game of Chance */

#include "craps.h"

int main() {
	srand((unsigned int)time(NULL));
	int choice, choice2, input_ok, charInput, die1, die2, sumDice, pointValue, status, num_roll = 0;
	double initialBank, bankBalance = 0.0, wagerAmount;

	do {
		do {
			printf("Craps \n"
			"Select from the following\n"
			"1) Display the game rules\n"
			"2) Play the game\n"
			"3) Quit\n"
			"-->");
			scanf(" %d", &choice);
		} while (choice != 1 && choice != 2 && choice != 3); 

		if (choice == 1) {
			printf("Rules\n");
			print_game_rules();
		}
		else if (choice == 2) {
			do {
				initialBank = get_bank_balance();
			} while (initialBank <= 0);
			bankBalance = initialBank;
			printf("Game Loop\n");
			do {
				do {
					wagerAmount = get_wager_amount();
				} while (!check_wager_amount(wagerAmount, bankBalance));
				printf("\n Roll dices \n");
				system("pause");
				die1 = roll_die();
				die2 = roll_die();
				sumDice = calculate_sum_dice(die1, die2);
				printf("die 1: %d \ndie 2: %d \n sum of dice: %d \n", die1, die2, sumDice);
				num_roll = 1;
				status = is_win_loss_or_point(sumDice);
				switch (status) {
				case 0:
					printf("House Wins \n");
					bankBalance = adjust_bank_balance(bankBalance, wagerAmount, 0);
					break;
				case 1:
					printf("Player Wins \n");
					bankBalance = adjust_bank_balance(bankBalance, wagerAmount, 1);
					break;
				case -1:
					printf("%d is now Player's Point", sumDice);
					pointValue = sumDice;
					do {
						printf("\n Roll dices \n");
						system("pause");
						die1 = roll_die();
						die2 = roll_die();
						sumDice = calculate_sum_dice(die1, die2);
						printf("die 1: %d \n die 2: %d \n sum of dice: %d ", die1, die2, sumDice);
						num_roll++;
						status = is_point_loss_or_neither(sumDice, pointValue);
						switch (status) {
						case 0:
							printf("House Wins \n");
							bankBalance = adjust_bank_balance(bankBalance, wagerAmount, 0);
							break;
						case 1:
							printf("Player Wins \n");
							bankBalance = adjust_bank_balance(bankBalance, wagerAmount, 1);
							break;
						case -1:
							printf("Try again \n");
							break;
						}
					} while (status == -1);
					break;
				}
				chatter_messages(num_roll, status, initialBank, bankBalance);
				
				printf("Enter -1 to exit the 'game loop'\n");
				input_ok = scanf("%d", &choice2);
				if (choice2 != -1) 
					printf("\n\n************** Continue the GAME loop! **************\n\n");

				if (input_ok == 0) 
					while ((charInput = getchar()) != '\n'); 

			} while (choice2 != -1);
		}
		

		if (choice != 3) 
			printf("\n\n************** Continue the loop! **************\n\n");

	} while (choice != 3);
	system("pause");
	return 0;
}