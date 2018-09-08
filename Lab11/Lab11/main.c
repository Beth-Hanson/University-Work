/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 11
File: lab11.h
Date: 07/17/18
Description: */

#include "lab11.h"

int main() {
	int sum = 0;
	char *string[50];
	//Task 1
	sum = sum_digits(765);
	printf("sum: %d\n", sum);
	//Task 2
	printf("Input string: ");
	scanf("%s", &string);
	if (is_palindrome(string)) {
		printf("Palindrome\n");
	}
	else {
		printf("Not Palindrome\n");
	}

	//Task 3
	
	reducingString("bird", 4);
	system("pause");
	return 0;
}