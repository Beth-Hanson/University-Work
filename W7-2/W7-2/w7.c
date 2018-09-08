/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Warm up 7-2
File: w7.c
Date: 07/17/18
Description: Warm up 7-2.*/

#include "w7.h"

//2.
void print_stars(int n) {
	if (n == 1) {
		printf("*");
	}
	else {
		print_stars(n-1);
		printf("*");
	}
}