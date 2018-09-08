/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 5
File: MathModels.h
Date: 06/28/18
Description: */

#ifndef MATHMODELS_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define MATHMODELS_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

//Prototypes
int display_menu();
void determine_line_form(int option);
void get_point_slope_form(double *slope, double *x1, double *y1);
void determine_y_intercept(double slope, double x1, double y1, double *y_intercept);
void get_two_point(double *x1, double *y1, double *x2, double *y2);
void calculate_slope_from_two_point(double x1, double y1, double x2, double y2, double *slope);

#endif