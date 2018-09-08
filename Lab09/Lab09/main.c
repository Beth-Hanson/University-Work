/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 9
File: task1.h
Date: 07/10/18
Description: */

#include "lab09.h"

int main() {
	//Task 1
	char string[] = { 'H','e','l','l','o','\0' };
	char temp;
	int size = my_strlen(string), count = 0;
	while (count < size) {
		temp = string[count];
		string[count] = string[size];
		string[size] = temp;
		count++;
		size--;
	}
	//Definitely Never figured this out
	printf("%s \n", string);
	system("pause");
	return 0;
}