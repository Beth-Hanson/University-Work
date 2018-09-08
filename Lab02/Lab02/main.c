/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab02
Date: 06/11/18
Description: Purpose is to practice 3 file format*/
//Task 1

#include "task1.h"



int main() {
	int x1, x2, y1, y2;
	double slope;
	x1 = getPoint(1, 'x');
	x2 = getPoint(2, 'x');
	y1 = getPoint(1, 'y');
	y2 = getPoint(2, 'y');
	slope = getSlope(x1, x2, y1, y2);
	

	return 0;
}