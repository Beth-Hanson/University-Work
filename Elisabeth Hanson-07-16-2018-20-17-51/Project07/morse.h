/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 7
File: morse.h
Date: 07/16/18
Description: Morse Converter.*/

#ifndef MORSE_H
#pragma warning(disable: 4996)
#define MORSE_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

//Structs and Enums
typedef struct morse {
	char *text;
	char *morse;
}morse_t;

//Prototypes
void initialize_morse_strings(char morse_strings[][6]);
void to_upper(char * input_char);
char morseSearch(char inputArray[], morse_t structInput[], int structInputSize);

#endif