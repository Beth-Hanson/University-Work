/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 11
File: lab11.h
Date: 07/17/18
Description: */

#include "lab11.h"

//Task 1
int sum_digits(int n) {
	int sum = 0;
	if (n == 0) {
		sum = 0;
	}
	else {
		sum = n % 10 + sum_digits(n / 10);
	}
	return sum;
}

//Task 2
int palindromeRec(char str[], int i, int j) {
	if (i == j) {
		return 1;
	}
	else if (str[i] != str[j]) {
		return 0;
	}
	else if (i < j + 1) {
		return palindromeRec(str, i + 1, j - 1);
	}
	return 1;
}

int is_palindrome(char str[]) {
	int n = strlen(str);
	if (n == 0) {
		return 1;
	}
	else {
		return palindromeRec(str, 0, n - 1);
	}
}

//Task 3 Can't edit this function to work the same way as example code. 
void reducingString(char *str, int n) {
	if (n > 0) {
		printf("%s ", str);
		reducingString(&str[1], n - 1);
	}
}