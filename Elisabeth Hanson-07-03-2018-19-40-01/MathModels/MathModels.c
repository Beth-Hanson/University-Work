/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5
File: MathModels.c
Date: 06/28/18
Description: */

#include "MathModels.h"

/*
Function: display_menu
Description: Do-while loop that displays menu and scans a value for option
Input parameters: void
Returns: option
Preconditions:
Postconditions:
*/
int display_menu() {
	int option = 0;
	do {
		printf("Select Form to Convert to Slope-Intercept Form:\n"
			"1) Two-Point Form\n"
			"2) Point-Slope Form\n"
			"3) Exit\n");
		scanf("%d", &option);
	} while (option != 1 && option != 2 && option != 3);
	return option;
}

/*
Function: determine_line_form
Description: if statement, could have been switch but didn't think of it, that uses option to determine conversion
Input parameters: option
Returns: void
Preconditions:
Postconditions:
*/
void determine_line_form(int option){
	double x1 = 0, x2 = 0, y1 = 0, y2 = 0, slope = 0, y_intercept = 0;
	if (option == 1) {
		get_two_point(&x1, &y1, &x2, &y2);
		calculate_slope_from_two_point(x1, y1, x2, y2, &slope);
		determine_y_intercept(slope, x1, y1, &y_intercept);
		printf("y = mx + b \n"
			"y = %.2lfx + %.2lf\n", slope, y_intercept);
	}
	if (option == 2) {
		get_point_slope_form(&slope, &x1, &y1);
		printf("y - y1 = m(x - x1) \n"
			"y - %.2lf = %.2lf(x - %.2lf)", y1, slope, x1);
		determine_y_intercept(slope, x1, y1, &y_intercept);
		printf("y = mx + b \n"
			"y = %.2lfx + %.2lf\n", slope, y_intercept);
	}
}

/*
Function: get_point_slope_form
Description: scans in values for slope, x1, and y1
Input parameters: slope pointer, x1 pointer, y1 pointer
Returns: void
Preconditions:
Postconditions:
*/
void get_point_slope_form(double *slope, double *x1, double *y1) {
	printf("Input slope: ");
	scanf("%lf", slope);
	printf("Input x and y seperated by space: ");
	scanf("%lf%lf", x1, y1);
	printf("Point (%.2lf , %.2lf) \n Slope: %.2lf", *x1, *y1, *slope);
}

/*
Function: determine_y_intercept
Description: determines value for y_intercept
Input parameters: slope, x1, y1, y_intercept pointer
Returns: void
Preconditions:
Postconditions:
*/
void determine_y_intercept(double slope, double x1, double y1, double *y_intercept) {
	*y_intercept = y1 - (slope * x1);
}

/*
Function: get_two_point
Description: scans in values for x1, y1, x2, and y2
Input parameters: x1 pointer, y1 pointer, x2 pointer, y2 pointer
Returns: void
Preconditions:
Postconditions:
*/
void get_two_point(double *x1, double *y1, double *x2, double *y2) {
	printf("Input x and y for first point seperated by space: ");
	scanf("%lf%lf", x1, y1);
	printf("Input next x and y for second point seperated by space: ");
	scanf("%lf%lf", x2, y2);
	printf("Point 1: (%.2lf , %.2lf)\n", *x1, *y1);
	printf("Point 2: (%.2lf , %.2lf)\n", *x2, *y2);
}

/*
Function: calculate_slope_from_two_point
Description: Calculates slope and assigns value. 
Input parameters: x1, y1, x2, y2, and slope pointer.
Returns: void
Preconditions:
Postconditions:
*/
void calculate_slope_from_two_point(double x1, double y1, double x2, double y2, double *slope) {
	*slope = ((x1 - x2) / (y1 - y2));
	printf("slope = ((x1 - x2) / (y1 - y2))\n"
		"%.2lf = ((%.2lf - %.2lf) / (%.2lf - %.2lf))", *slope, x1, x2, y1, y2);
}

