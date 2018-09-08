/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 8
File: task1.h
Date: 07/03/18
Description: */

#include "lab08.h"

/*
Function: getAve
Description: Uses a for loop to sum the integers in the array.
Then averages the array by dividing the sum by the count of the loop.
Input parameters: array
Returns: average
Preconditions:
Postconditions:
*/
double getAve(int intArray[]) {
	int sum = 0, count = 0;
	double ave = 0;
	for (count = 0; count < 15; count++) {
		sum = sum + intArray[count];
	}
	ave = (double)sum / count;
	return ave;
}
//Note to Self: What if I need it? 
/*void swap(int *a, int *b) {
	int point = 0;
	point = *a;
	*a = *b;
	*b = point;
}

void sortArray(int intArray[], int size) {
	int count = 0, count2 = 0;
	for (count = 0; count < size - 1; count++) {
		for (count2 = 0; count2 < size - count - 1; count2++) {
			if (intArray[count2] > intArray[count2 + 1]) {
				swap(&intArray[count2], &intArray[count2 + 1]);
			}
		}
	}
}*/

/*
Function: getMedian
Description: takes the size of the array, adds one, divides by two and subtracts 1 from the total.
Subtract 1 because the array starts at zero. Median is at array[size].
Input parameters: array, size
Returns: median
Preconditions:
Postconditions:
*/
int getMedian(int intArray[], int size) {
	int median = 0;
	size = (size + 1) / 2 - 1;
	median = intArray[size];
	return median;
}

/*
Function: printStuff
Description: Prints integers in array, average of array, and median of array.
Input parameters: array, ave, median
Returns: void
Preconditions:
Postconditions:
*/
void printStuff(int intArray[], double ave, int median) {
	int count = 0;
	printf("Array: ");
	for (count = 0; count < 15; count++) {
		printf("%d ", intArray[count]);
	}
	printf("\nAverage of Array = %lf\n", ave);
	printf("Median of Array = %d\n", median);
}