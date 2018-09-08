/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 9
File: task1.h
Date: 07/10/18
Description: */

#include "lab09.h"

/*
Function:
Description: 
Input parameters:
Returns: void
Preconditions:
Postconditions:
*/
char * string_reverse(char string[]) {
	char temp;
	int size = my_strlen(string), count = 0;
	while (count < size) {
		temp = string[count];
		string[count] = string[size];
		string[size] = temp;
		count++;
		size--;
	}
}

/*
Function:
Description:
Input parameters:
Returns: void
Preconditions:
Postconditions:
*/
int my_strlen(char arr[]) {
	char value = arr[0];
	int count = 0;
	while (value != '\0')
	{
		count++;
		value = arr[count];
	}

	return count;
}
