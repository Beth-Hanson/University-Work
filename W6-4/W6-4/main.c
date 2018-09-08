/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Warm Up 6-4
File: main.c
Date: 07/12/18
Description: .*/

#include "warmup.h"

int main() {
	course_t course1, course2 = {"o","0", 0};
	ship_t ships[5];

	strcpy(course1.name, "Cpts 121");
	strcpy(course1.textbook, "Textbook");
	course1.class_size = 15;
	// direct component selection operator selects the component that is being modified or used
	/*courseInfo(course1);
	course2 = get_course();
	courseInfo(course2);*/
	
	// indirect component selector points in the direction of the component, telling the program to look at it.
	
	strcpy(ships[0].shipName, "Destroyer");
	ships[0].shipSymbol = 'd';
	ships[0].shipLength = 2;
	
	strcpy(ships[1].shipName, "Cruiser");
	ships[1].shipSymbol = 'r';
	ships[1].shipLength = 3; 
	
	strcpy(ships[2].shipName, "Submarine");
	ships[2].shipSymbol = 's';
	ships[2].shipLength = 3;

	strcpy(ships[3].shipName, "Battle Ship");
	ships[3].shipSymbol = 'b';
	ships[3].shipLength = 4;

	strcpy(ships[4].shipName, "Carrier");
	ships[4].shipSymbol = 'c';
	ships[4].shipLength = 5;

	system("pause");
	return 0;
}