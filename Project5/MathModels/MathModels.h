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
#define TWO_POINT_FORM 1
#define POINT_SLOPE_FORM 2
#define EXIT 3

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
void display_point_slope_form(double slope, double x1, double y1);
void display_slope_intercept_form(double slope, double y_intercept);

void get_two_point_form(double *x1, double *y1, double *x2, double *y2);
void display_two_point_form(double x1, double y1, double x2, double y2);
void calculate_slope_from_two_point(double x1, double y1, double x2, double y2, double *slope);

#endif