/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5
File: MathModels.c
Date: 06/28/18
Description: */

#include "MathModels.h"

/*
Function: 
Description: 
Input parameters: 
Returns:
Preconditions:
Postconditions:
*/
int display_menu()
{
	//TODO: implement the display_menu() logic
	return EXIT;
}

/*
Function:
Description:
Input parameters:
Returns:
Preconditions:
Postconditions:
*/
void determine_line_form(int option)
{
	//TODO: implement the determine_line_form() logic
}

/*
Function:
Description:
Input parameters:
Returns:
Preconditions:
Postconditions:
*/
void get_point_slope_form(double *slope, double *x1, double *y1) {
	printf("Input slope: ");
	scanf("%lf", *slope);
	printf("Input x and y seperated by space: ");
	scanf("%lf%lf", *x1, *y1);
	printf("Point (%.2lf , %.2lf) \n Slope: %.2lf", x1, y1, slope);
}

void determine_y_intercept(double slope, double x1, double y1, double *y_intercept) {
	*y_intercept = y1 - (slope * x1);
}
void display_point_slope_form(double slope, double x1, double y1) {

}
void display_slope_intercept_form(double slope, double y_intercept) {

}

void get_two_point(double *x1, double *y1, double *x2, double *y2) {
	printf("Input x and y for first point seperated by space: ");
	scanf("%lf%lf", *x1, *y1);
	printf("Input next x and y for second point seperated by space: ");
	scanf("%lf%lf", *x2, *y2);
	printf("Point 1: (%.2lf , %.2lf)\n", x1, y1);
	printf("Point 2: (%.2lf , %.2lf)\n", x2, y2);
}

void calculate_slope_from_two_point(double x1, double y1, double x2, double y2, double *slope) {
	*slope = ((x1 - x2) / (y1 - y2));
	printf("slope = ((x1 - x2) / (y1 - y2))\n"
		"%.2lf = ((%.2lf - %.2lf) / (%.2lf - %.2lf))", slope, x1, x2, y1, y2);
}

