/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 2
Date: 06/13/18
Description: Modular Calculator */

#include "project2.h"

//Function Definitions


char get_next_character(char plaintext_character) {
	char next_character = plaintext_character + 1;
	return next_character; 
} 

double calculate_centripetal_force(double mass, double radius, double velocity) {
	return (mass * pow(velocity, 2)) / radius;
} 

double calculate_surface_area_cylinder(double radius, double height) {
	return (double)2 * PI * height + (double)2 * PI * pow(radius, 2);
}

double calculate_resistive_divider(double resistance1, double resistance2, double vin) {
	return (resistance2 / (resistance1 + resistance2)) * vin;
}

double calculate_root_mean_square(double x, double y, double z) {
	return sqrt(((double)1 / 3) * (pow(x, 2) + pow(y, 2) + pow(z, 2)));
}

double calculate_quadratic_formula(double a, double b, double c) {
	return ( -b + sqrt(b * b - 4 * a * c)) / 2 * a;
}

double calculate_general_equation(double num1) {
	return sin(2 * PI * num1) + GOLDEN_RATIO;
}