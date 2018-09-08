/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab02
Date: 06/11/18
Description: Purpose is to practice 3 file format*/
//Task 1

#include "task1.h"

int getPoint(int pointNum, char plane) {
	int point;
	printf("Input value for point %d for %c  ", pointNum, plane);
	scanf("%d", &point);

	return point;
}
double getSlope(int x1, int y1, int x2, int y2) {
	double slope;
	slope = ((x1 - x2) / (y1 - y2));
	printf("slope= %lf", slope);
	return slope;
}
double getMidpoint(double pointm) {


	return 0;//fix
}