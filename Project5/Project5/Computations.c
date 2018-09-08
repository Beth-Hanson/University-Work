/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5
File: Computations.c
Date: 06/28/18
Description: */

#include "Computations.h"

/*
Function: 
Description: 
Input parameters: 
Returns:
Preconditions:
Postconditions:
*/
void answer_questions(int number, int *is_multiple_7_11_13, int *is_sum_odd, int *is_prime) {
	is_prime_number(number, is_prime);
	isSumOdd(number, is_sum_odd);
	if ((number % 7) == 0 || (number % 11) == 0 || (number % 13) == 0) {
		*is_multiple_7_11_13 = 1;
	}
	else {
		*is_multiple_7_11_13 = 0;
	}
}

/*
Function:
Description:
Input parameters:
Returns:
Preconditions:
Postconditions:
*/
void is_prime_number(int number, int *is_prime) {
	*is_prime = 1;
	for (int count = 2; count < number; count++) {
		if ((number % count) == 0) {
			*is_prime = 0;
		}
	}
}
/*
Function:
Description:
Input parameters:
Returns:
Preconditions:
Postconditions:
*/
void isSumOdd(int number, int *is_odd) {
	int sum = 0;
		while ((number % 10) != 0) {
			sum += number % 10;
			number = number / 10;
		} 
		if ((number % 2) == 0) {
			*is_odd = 0;
		} 
		else {
		*is_odd = 1;
		}

}
