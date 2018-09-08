/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab03
Date: 06/14/18
Description: Practice using file functions and if statements*/
//Task 1

#include "L3Task1.h"
int main() {
	FILE * infile = NULL;
	char character;
	int value;
	infile = open_input_file;
	character = read_character(infile);
	value = determine_ascii_value(character);
	is_line(value);
	number_lines(character, value);


	return 0;
}