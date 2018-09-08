/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 3
File: main.c
Date: 06/15/18
Description: Analysis of Student Records */

#include "project3.h"
/*
Function: main ()
Description: the main function and entry point for my program
Input parameters: none
Returns: 0 on successful execution
Preconditions: none
Postconditions: 0 is returned
*/

int main() {
	int id1, id2, id3, id4, id5, class1, class2, class3, class4, class5, sumClass;
	double gpa1, gpa2, gpa3, gpa4, gpa5, age1, age2, age3, age4, age5, sumGpa, sumAge, aveGpa, aveClass, aveAge;
	double devGpa1, devGpa2, devGpa3, devGpa4, devGpa5, varGpa, stddevGpa, minGpa, maxGpa;
	FILE*infile = NULL, *outfile = NULL;
	infile = fopen("input.dat", "r");
	outfile = fopen("output.dat", "w");
	id1 = read_integer(infile);
	gpa1 = read_double(infile);
	class1 = read_integer(infile);
	age1 = read_double(infile);

	id2 = read_integer(infile);
	gpa2 = read_double(infile);
	class2 = read_integer(infile);
	age2 = read_double(infile);

	id3 = read_integer(infile);
	gpa3 = read_double(infile);
	class3 = read_integer(infile);
	age3 = read_double(infile);

	id4 = read_integer(infile);
	gpa4 = read_double(infile);
	class4 = read_integer(infile);
	age4 = read_double(infile);

	id5 = read_integer(infile);
	gpa5 = read_double(infile);
	class5 = read_integer(infile);
	age5 = read_double(infile);

	sumGpa = calculate_sum(gpa1, gpa2, gpa3, gpa4, gpa5);
	sumClass = calculate_sum(class1, class2, class3, class4, class5);
	sumAge = calculate_sum(age1, age2, age3, age4, age5);
	
	aveGpa = calculate_mean(sumGpa, 5);
	fprintf(outfile, "Average Gpa: ");
	print_double(outfile, aveGpa);
	aveClass = calculate_mean(sumClass, 5);
	fprintf(outfile, "Average Class Standing: ");
	print_double(outfile, aveClass);
	aveAge = calculate_mean(sumAge, 5);
	fprintf(outfile, "Average Age: ");
	print_double(outfile, aveAge);

	devGpa1 = calculate_deviation(gpa1, aveGpa);
	devGpa2 = calculate_deviation(gpa2, aveGpa);
	devGpa3 = calculate_deviation(gpa3, aveGpa);
	devGpa4 = calculate_deviation(gpa4, aveGpa);
	devGpa5 = calculate_deviation(gpa5, aveGpa);
	varGpa = calculate_variance(devGpa1, devGpa2, devGpa3, devGpa4, devGpa5, 5);
	stddevGpa = calculate_standard_deviation(varGpa);
	fprintf(outfile, "Standard Deviation of GPA: ");
	print_double(outfile, stddevGpa);

	maxGpa = find_max(gpa1, gpa2, gpa3, gpa4, gpa5);
	fprintf(outfile, "Max GPA: ");
	print_double(outfile, maxGpa);
	minGpa = find_min(gpa1, gpa2, gpa3, gpa4, gpa5);
	fprintf(outfile, "Min GPA: ");
	print_double(outfile, minGpa);

	system("pause");

	return 0;
}