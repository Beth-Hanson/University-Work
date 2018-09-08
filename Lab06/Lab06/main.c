/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 6
File: main.c
Date: 06/26/18
Description:  */

#include "lab6.h"
/*
Function: main ()
Description: the main function and entry point for my program
Input parameters: none
Returns: 0 on successful execution
Preconditions: none
Postconditions: 0 is returned
*/
int main() {
	//Task 1
	//Variables
	FILE *infile = NULL, *outfile = NULL;
	int customerId = 0, month = 0, year = 0, count = 0;
	double hour = 0.0;
	double total_charge, ave_charge;
	infile = fopen("usage.txt", "r");
	outfile = fopen("charges.txt", "w");
	fscanf(infile, "%d", &month);
	fscanf(infile, "%d", &year);
	fprintf(outfile, "%d/%d\n", month, year);
	fprintf(outfile, "%s %15s %20s %25s \n", "Customer ID", "Usage Hours", "Total Charge", "Average Charge");
	while (count < 3) {
		fscanf(infile, "%d%lf", &customerId, &hour);
		charges(hour, &total_charge, &ave_charge);
		fprintf(outfile, "%d %18lf %20lf %23lf \n", customerId, hour, total_charge, ave_charge);
		count++;
	}
	fclose(infile);
	fclose(outfile);
	//Task 2

	system("pause");
	return 0;
}