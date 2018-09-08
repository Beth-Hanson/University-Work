/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 10
File: lab10.c
Date: 07/12/18
Description: .*/

#include "lab10.h"
//Task 1
/*
Function: print_location()
Description: Prints location in place name, latitude and longitude.
Input parameters: location_t place
Returns: void
Preconditions: location struct
Postconditions: printf statement
*/
void print_location(location_t place) {
	printf("Place: %s\n", place.place);
	printf("Lat: %d degrees %d minutes %.1lf seconds %c\n", place.latitude);
	printf("Long: %d degrees %d minutes %.1lf seconds %c\n", place.longitude);
}

//Task 2
/*
Function: is_same_vehicle()
Description: determines if vehicles are the same
Input parameters: vehicle_t vehicle1 and vehicle2
Returns: 1 or 0
Preconditions: vehicle struct
Postconditions: 1 or 0
*/
int is_same_vehicle(vehicle_t vehicle1, vehicle_t vehicle2) {
	if (vehicle1.make == vehicle2.make && vehicle1.model == vehicle2.model && vehicle1.body_type == vehicle2.body_type) {
		return 1;
	}
	else {
		return 0;
	}
}

//Task 3
/*
Function: bread_basket_contents()
Description: produces number of whole wheat bread and total price
Input parameters: bread_t basket[10], whole pointer, price pointer
Returns: void
Preconditions: bread struct 
Postconditions: change to whole and price value
*/
void bread_basket_contents(bread_t basket[10], int *whole, double *price) {
	for (int count = 0; count < 10; count++) {
		if (basket->whole_wheat == true) {
			*whole += count;
			*price += count;
		}
		else {
			*whole = *whole;
			*price = *price;
		}
	}
}