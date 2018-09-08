/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 8
File: task1.h
Date: 07/03/18
Description: */

#include "lab08.h"

int main() {
	//Task 2
	FILE *infile = NULL;
	int intArray[15];
	int count = 0, median = 0;
	double ave = 0;
	infile = fopen("numbers.txt", "r");
	for (count = 0; count < 15; count++) {
		fscanf(infile, "%d", &intArray[count]);
	}
	ave = getAve(intArray);
	median = getMedian(intArray, 15);
	printStuff(intArray, ave, median);
	fclose(infile);

	//Task 3

	system("pause");
	return 0;
}