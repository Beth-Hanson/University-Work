/*Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 8
File: project8.h
Date: 07/19/18
Description: Strings and Dynamic Memory*/

#ifndef PROJECT_H
#pragma warning(disable: 4996)
#define PROJECT8_H
#define PARTS_OF_SPEECH 4

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>

//Structs and Enums
typedef enum pos
{
	Articles = 2, Nouns, Verbs, Prepositions
} part_of_speech;


//Prototypes
part_of_speech pos_string_to_enum(char* pos);
void bubbleSort(char **wordArray, int size);
#endif