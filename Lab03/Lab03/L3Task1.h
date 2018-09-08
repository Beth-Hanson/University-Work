/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab03
Date: 06/14/18
Description: File I/O, statements and if statements*/
//Task 1

#ifndef L3TASk1_H
#define L3TASK1_H
#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>
#define NEWLINE 1
#define NOT_NEWLINE 0
#define VOWEL 2
#define NOT_VOWEL 0

FILE * open_input_file(void);
char read_character(FILE * infile);
int determine_ascii_value(char);
int is_line(char);
int number_lines(char, int);

#endif