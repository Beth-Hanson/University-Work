/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5
File: MathModels.h
Date: 06/28/18
Description: */

#include "MathModels.h"

int main() {
	int option = 0;

	do
	{
		option = display_menu();
		determine_line_form(option);
	} while (option != EXIT);

	system("pause");
	return 0;
}