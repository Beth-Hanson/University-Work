/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Warm up 6
File: main.c
Date: 07/10/18
Description: Warm up.*/

#pragma warning(disable: 4996)
//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
//Prototypes


int main() {
	char the_array[5];
	char c = the_array[0];
	if (c >= '0' && c <= '9') {
		return 1;
	}
	else {
		return 0;
	}
	return 0;
}