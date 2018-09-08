/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5
File: Computations.h
Date: 06/28/18
Description: */

#ifndef COMPUTATIONS_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define COMPUTATIONS_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Prototypes
void answer_questions(int, int *is_multiple_7_11_13, int *is_sum_odd, int *is_prime);
void is_prime_number(int, int *is_prime);
void isSumOdd(int, int *is_odd);
#endif