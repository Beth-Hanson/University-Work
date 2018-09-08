/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 7
File: morse.h
Date: 07/16/18
Description: Morse Converter.*/

#include "morse.h"

/****************************************************************
* Function: initialize_morse_strings ()							*
* Date Created: July 16 2017									*
* Date Last Modified: July 16 2017								*
* Description: This function populates the morse_strings array	*
* with the morse code symbols corresponding to the alpha/digit	*
* Input parameters: A 2D char array of size 91x6.				*
* Returns: morse_strings array with indices 48-57 and 60-90.	*
* populated with digits 0-9 and alphas 'A'-'Z'					*
* Pre: morse_strings array is a 2D char array of size 91x6		*
* Post: morse_strings array contains alpha/digit-morse values.	*
****************************************************************/
void initialize_morse_strings(char morse_strings[][6])
{
	strcpy(morse_strings['A'], ".-"); 
	strcpy(morse_strings['B'], "-..."); 
	strcpy(morse_strings['C'], "-.-.");	
	strcpy(morse_strings['D'], "-..");	
	strcpy(morse_strings['E'], ".");	
	strcpy(morse_strings['F'], "..-.");
	strcpy(morse_strings['G'], "--.");
	strcpy(morse_strings['H'], "....");
	strcpy(morse_strings['I'], "..");
	strcpy(morse_strings['J'], ".---");
	strcpy(morse_strings['K'], "-.-");
	strcpy(morse_strings['L'], ".-..");
	strcpy(morse_strings['M'], "--");
	strcpy(morse_strings['N'], "-.");
	strcpy(morse_strings['O'], "---");	
	strcpy(morse_strings['P'], ".--.");	
	strcpy(morse_strings['Q'], "--.-");	
	strcpy(morse_strings['R'], ".-.");
	strcpy(morse_strings['S'], "...");
	strcpy(morse_strings['T'], "-");	
	strcpy(morse_strings['U'], "..-");	
	strcpy(morse_strings['V'], "...-");	
	strcpy(morse_strings['W'], ".--");	
	strcpy(morse_strings['X'], "-..-");	
	strcpy(morse_strings['Y'], "-.--");	
	strcpy(morse_strings['Z'], "--..");					
	
	strcpy(morse_strings['0'], "-----"); 
	strcpy(morse_strings['1'], ".----"); 
	strcpy(morse_strings['2'], "..---");
	strcpy(morse_strings['3'], "...--");
	strcpy(morse_strings['4'], "....-");
	strcpy(morse_strings['5'], ".....");
	strcpy(morse_strings['6'], "-....");
	strcpy(morse_strings['7'], "--...");
	strcpy(morse_strings['8'], "---..");
	strcpy(morse_strings['9'], "----.");

}

/*
Function: to_upper ()
Description: takes in a character and returns the uppercase value.
Input parameters: a pointer to a char
Returns: The uppercase value of the input character via an output parameter.
Preconditions: input_char is a pointer of type char.
Postconditions: input_char has been changed to its uppercase value.
*/
void to_upper(char * input_char)
{ //Checking for lower case character ascii numbers
	if (*input_char > 96 && *input_char < 123) {
		*input_char = *input_char - 32;
	}
}

char morseSearch(char inputArray[], morse_t structInput[], int structInputSize) {
	for (int i = 0; i < structInputSize; i++) {
		if (strcmp(inputArray, structInput[i].morse) == 0) {
			return structInput[i].text[0];
		}
	}
}
