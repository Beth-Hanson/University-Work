/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 
File: project3.c
Date: 06/15/18
Description: Analysis of Student Records */

#include "project3.h"

/*
Function: read_double ()
Description: reads double from file and returns value
*/
double read_double(FILE*infile) {
	double number;
	fscanf(infile, "%lf", &number);
	return number;
}
/*
Function: read_integer ()
Description: reads integer from file and returns value
*/

int read_integer(FILE*infile) {
	int number;
	fscanf(infile, "%d", &number);
	return number;
}
/*
Function: calculate_sum()
Description: returns the sum of 5 numbers
*/
double calculate_sum(double number1, double number2, double number3, double number4, double number5) {
	double sum = number1 + number2 + number3 + number4 + number5;
	return sum;
}
/*
Function: calculate_mean ()
Description: returns the average of sum divided by the number of values
*/
double calculate_mean(double sum, int number) {
	double ave = sum / number;
	return ave;
}
/*
Function: calculate_deviation ()
Description: returns the deviation of a value from its mean by subtracting the number from the mean
*/
double calculate_deviation(double number, double mean) {
	double deviation = number - mean;
	return deviation;
}
/*
Function: calculate_variance ()
Description: returns the variance by adding the squared deviations together
*/
double calculate_variance(double deviation1, double deviation2, double deviation3, double deviation4, double deviation5, int number) {
	double variance = ((deviation1*deviation1) + (deviation2*deviation2) + (deviation3*deviation3) + (deviation4*deviation4) + (deviation5*deviation5)) / number;
	return variance;
}
/*
Function: calculate_standard_deviation ()
Description: returns the standard deviation by taking the square root of the variance
*/
double calculate_standard_deviation(double variance) {
	return sqrt(variance);
}
/*
Function: find_max ()
Description: finds the maximum value of 5 numbers
*/
double find_max(double number1, double number2, double number3, double number4, double number5) {
	double max = number1;
	if (max <= number1) {
		max = number1;
	}
	if (max <= number2 && max > number1) {
		max = number2;
	}
	if (max <= number3 && max > number2) {
		max = number3;
	}
	if (max <= number4 && max > number3) {
		max = number4;
	}
	if (max > number4 && max == number5) {
		max = number5;
	}
	return max;
}
/*
Function: find_min ()
Description: finds the minimum value of 5 numbers
*/
double find_min(double number1, double number2, double number3, double number4, double number5) {
	double min = number1;

	if (min > number1) {
		min = number1;
	}
	if (min > number2) {
		min = number2;
	}
	if (min > number3) {
		min = number3;
	}
	if (min > number4) {
		min = number4;
	}
	if (min > number5) {
		min = number5;
	}
	return min;
}
/*
Function: print_double ()
Description: prints value to output.dat
*/
void print_double(FILE *outfile, double number) {
	fprintf(outfile, "%.2lf \n", number);
}