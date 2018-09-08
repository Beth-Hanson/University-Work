/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 8
File: task1.h
Date: 07/03/18
Description: */

#ifndef LAB08_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define LAB08_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Prototypes
double getAve(int intArray[]);
void printStuff(int intArray[], double, int);
/*void sortArray(int intArray[], int size);
void swap(int *a, int *b);*/
int getMedian(int intArray[], int);
#endif