/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab03
Date: 06/14/18
Description: Practice using file functions and if statements*/
//Task 1

#include "L3Task1.h"
FILE * open_input_file(void) {
	fopen("input.dat", "r");
	return 0;
}

char read_character(FILE * infile) {
	char character;
	fscanf(infile, "%c", &character);
	return character;
}

int determine_ascii_value(char character) {
	int ascii_value;
	ascii_value = character;
	return ascii_value;
} 

int is_line(char character) {
	if (character == 10) {
		return NEWLINE;
	}
	else {
		return NOT_NEWLINE;
	}
	return 0;
}

int number_lines(char character, int current_number_lines) {
	if (is_line(character)) {
		current_number_lines = current_number_lines + 1;
		return current_number_lines;
	}
	else {
		return current_number_lines;
	}
	return 0;
}


