/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 7
File: morse.h
Date: 07/16/18
Description: Morse Converter.*/

#include "morse.h"

int main() {
	FILE *source = NULL, *destination = NULL;
	int converted = 0;
	//conversion table
	morse_t morseAlpha[] = { { "A", ".-" },{ "B", "-..." },{ "C", "-.-." },
	{ "D", "-.." },{ "E", "." },{ "F",  "..-." },{ "G", "--." },{ "H", "...." },
	{ "I", ".." },{ "J", ".---" },{ "K", "-.-" },{ "L", ".-.." },{ "M", "--" },
	{ "N", "-." },{ "O", "---" },{ "P", ".--." },{ "Q", "--.-" },{ "R", ".-." },
	{ "S", "..." },{ "T", "-" },{ "U", "..-" },{ "V", "...-" },{ "W", ".--" },
	{ "X", "-..-" },{ "Y", "-.--" },{ "Z", "--.." } };
	morse_t morseDigit[] = { { "0", "-----" },{ "1", ".----" },{ "2", "..---" },{ "3", "...--" },
	{ "4", "....-" },{ "5", "....." },{ "6", "-...." },{ "7", "--..." },
	{ "8", "---.." },{ "9", "----." } };

	char morseString[6000] = "";
	char morseChar[6] = "";
	char input[1000], option[5];
	char* morse;

	do {
		printf("Input -m for text to morse converstion or -t for morse to text conversion:\n");
		scanf("%s", &option);
	} while (option[1] != 't' && option[1] != 'T' && option[1] != 'm' && option[1] != 'M');
	
	if (option[1] == 'm' || option[1] == 'M') {
		//to morse conversion
		source = fopen("english.txt", "r");
		destination = fopen("morse.txt", "w");
		while (!feof(source)) {
			fgets(&input, 100, source);
			for (int i = 0; i < strlen(input); i++) {
				if (isalpha(input[i])) {
					to_upper(&input[i]);
					morse = morseAlpha[input[i] - 65].morse;
					strcat(morseString, morse);
					strcat(morseString, " ");
				}
				if (isdigit(input[i])) {
					morse = morseDigit[input[i] - 48].morse;
					strcat(morseString, morse);
					strcat(morseString, " ");
				}
				if (isspace(input[i])) {
					strcat(morseString, "  ");
				}
			}
		}
		fprintf(destination, "%s", morseString);
	} 
	if (option[1] == 't' || option[1] == 'T') {
		//to text conversion
		source = fopen("morse.txt", "r");
		destination = fopen("english.txt", "w");
		while (!feof(source)) {
			fgets(&input, 600, source);
			for (int i = 0; i < strlen(input); i++) {
				int j = 0;
				while (input[i] != ' ') {
					morseChar[j] = input[i];
					i++;
					j++;
				}
				morseChar[j] = NULL;
				if (strlen(morseChar) == 5) {
					// morse digit
					fprintf(destination, "%c", morseSearch(morseChar, morseDigit, 10));
				}
				else if (strlen(morseChar) == 0) {
					//space put
					fprintf(destination, " ");
					i++;
				}
				else {
					//morse alpha
					fprintf(destination, "%c", morseSearch(morseChar, morseAlpha, 26));
				}
				morseChar[0] = NULL;
				converted++;
			}
		}
	}
	fprintf(destination, "\nCharacters Converted: %d", converted);
	fclose(source);
	fclose(destination);

	system("pause");
	return 0;
}