/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 6
File: lab6.c
Date: 06/26/18
Description:  */

#include "lab6.h"

/*
Function: charges ()
Description: 
Input parameters:
Returns:
Preconditions:
Postconditions:
*/
#include "lab6.h"
//Task 1
/*
Function: charges ()
Description: adjusts *total_charge and *ave_charge values
Input parameters: double hours, double *total_charge, double *ave_charge
Returns: 0
Preconditions: hours taken from file
Postconditions: pointers adjusted
*/
void charges(double hours, double *total_charge, double *ave_charge) {
	if (hours <= 10) {
		*total_charge = 7.99;
	}
	else {
		*total_charge = 7.99 + (1.99 * (hours - 10));
	}
	*ave_charge = (*total_charge) / hours;
	
}
//Task 2
/*
Function: 
Description:
Input parameters:
Returns: 
Preconditions:
Postconditions: 
*/