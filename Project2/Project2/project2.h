/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 2
Date: 06/13/18
Description: Modular Calculator */

#ifndef PROJECT_H
#pragma warning(disable: 4996)
#define PROJECT_H
#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define GOLDEN_RATIO 1.61803

//Function Prototypes

char get_next_character(char);
double calculate_centripetal_force(double, double, double);
double calculate_surface_area_cylinder(double, double);
double calculate_resistive_divider(double, double, double);
double calculate_root_mean_square(double, double, double);
double calculate_quadratic_formula(double, double, double);
double calculate_general_equation(double);

#endif