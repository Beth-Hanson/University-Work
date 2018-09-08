/*Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 8
File: project8.c
Date: 07/19/18
Description: Strings and Dynamic Memory*/

#include "project8.h"

//Comments, I know
part_of_speech pos_string_to_enum(char* pos)
{
	if (strcmp("Articles", pos) == 0)
		return Articles;
	if (strcmp("Nouns", pos) == 0)
		return Nouns;
	if (strcmp("Verbs", pos) == 0)
		return Verbs;
	if (strcmp("Prepositions", pos) == 0)
		return Prepositions;
}


void bubbleSort(char **wordArray, int size) {
	char temp[76] = "";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (strcmp(wordArray[i], wordArray[j]) < 0) {
				strcpy(temp, wordArray[i]);
				strcpy(wordArray[i], wordArray[j]);
				strcpy(wordArray[j], temp);
			}
		}
	}
}