/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 4
Date: 06/19/18
Description: File, if-else, and switch functions */

#ifndef LAB04_H
#pragma warning(disable: 4996)
#define LAB04_H
#include <stdio.h>
#include <math.h>

//Task 1 Calorie Calculator
double readWeight(FILE*infile);
double readHeight(FILE*infile);
double readAge(FILE*infile);
char readGender(FILE*infile);
double metabolicRate(char, double, double, double);
double calorieCount(double, int);

//Task 2 Player Bonus


#endif