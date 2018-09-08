/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 11
File: lab11.h
Date: 07/17/18
Description: */

#ifndef LAB11_H
#pragma warning(disable: 4996)
#define LAB11_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Structs and Enums

//Prototypes
//Task 1
int sum_digits(int);
int palindromeRec(char str[], int i, int j);
int is_palindrome(char str[]);
void reducingString(char *str, int n);

#endif
