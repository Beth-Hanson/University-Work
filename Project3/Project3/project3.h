/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 3
File: project3.h
Date: 06/15/18
Description: Analysis of Student Records */

#ifndef PROJECT3_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define PROJECT3_H
//libraries
#include <stdio.h>
#include <math.h>
//Prototypes
double read_double(FILE*infile);
int read_integer(FILE*infile);
double calculate_sum(double, double, double, double, double);
double calculate_mean(double, int);
double calculate_deviation(double, double);
double calculate_variance(double, double, double, double, double, int);
double calculate_standard_deviation(double);
double find_max(double, double, double, double, double);
double find_min(double, double, double, double, double);
void print_double(FILE *outfile, double);

#endif