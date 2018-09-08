/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 10
File: main.c
Date: 07/12/18
Description: .*/

#include "lab10.h"

int main() {
	//Task 1
	Lat_Long lat, longi;
	lat.degrees = 46;
	lat.minutes = 43;
	lat.seconds = 49.5;
	lat.direction = 'N';

	longi.degrees = 117;
	longi.minutes = 10;
	longi.seconds = 10.9;
	longi.direction = 'W';
	location_t place1 = { "EME", lat, longi };
	print_location(place1);

	//Task 3
	bread_t basket[10];
	
	system("pause");
	return 0;
}