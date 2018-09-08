/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5 Computations
File: main.c
Date: 06/28/18
Description: */
/*
****************************************************
******************** BONUS 5pts ********************

2pts:	include a structure chart, either as a resource file (e.g. pdf, image,etc) or in this comment block
1pt	:	include your algorithim/pseudocode for your program  in this comment block
2pts:	include a flow chart of your program logic/flow, either as a resource file (e.g. pdf, image,etc) or in this comment block

****************************************************
****************************************************
*/

#include "Computations.h"

int main() {
	FILE *infile = NULL;
	int *is_prime = NULL, *is_odd = NULL, *is_multiple_7_11_13 = NULL;
	int number = 0, prime = 0, odd = 0, factor = 0;
	is_multiple_7_11_13 = &factor;
	is_odd = &odd;
	is_prime = &prime;
	printf("1 for True, 0 for False \n");
	infile = fopen("numbers.txt", "r");
	while (!feof(infile)) {
		fscanf(infile, "%d", &number);
		printf("Number: %d\n", number);
		answer_questions(number, is_prime, is_odd, is_multiple_7_11_13);
		printf("A factor of 7, 11, or 13? %d\n", factor);
		printf("Sum of digits odd? %d\n", odd);
		printf("Prime? %d\n\n", prime);
	}
	system("pause");
	fclose(infile);
	return 0;
}