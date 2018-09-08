/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Project 2
Date: 06/13/18
Description: Modular Calculator */

#include "project2.h"
int main(void) {
	char character;
	double cForce, mass, radius, velocity, height, sArea;
	double resistance1, resistance2, vin, vout, x, y, z, rms;
	double a, b, c;

	//Next ASCII Character
	printf("Enter a character: \n");
	scanf("%c", &character);
	character = get_next_character(character);
	printf("Next Character is %c \n"
		"ASCII value for character is %d \n", character, character);
	//Putting %d allows for char next_character to display as an integer, showing the ASCII Value

	//Centripetal Force
	printf("Centripetal Force \n"
		"Enter mass, radius, and velocity: ");
	scanf("%lf%lf%lf", &mass, &radius, &velocity);
	cForce = calculate_centripetal_force(mass, radius, velocity);
	printf("The centripetal force for these values are %lf \n", cForce);

	//Surface Area
	printf("Surface Area \n" 
		"Input Radius and Height: ");
	scanf("%lf%lf", &radius, &height);
	sArea = calculate_surface_area_cylinder(radius, height);
	printf("Surface Area= %lf \n", sArea); 

	//Resistive Divider
	printf("Resistive Divider \n"
		"Input Resistance 1, Resistance 2 and Voltage In: ");
	scanf("%lf%lf%lf", &resistance1, &resistance2, &vin);
	vout = calculate_resistive_divider(resistance1, resistance2, vin);
	printf("Voltage Out= %lf \n", vout);

	//RMS
	printf("Root Mean Square \n"
		"Input x, y and z: ");
	scanf("%lf%lf%lf", &x, &y, &z);
	rms = calculate_root_mean_square(x, y, z);
	printf("RMS= %lf \n", rms);

	//Quadratic formula
	printf("Quadratic Formula \n"
		"Input a, b and c: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	printf("%lf", calculate_quadratic_formula(a, b, c));

	//General Equation
	printf("General Equation \n"
		"Input a number: ");
	scanf("%lf", &a);
	printf("%lf \n", calculate_general_equation(a));

	system("pause");
	return 0;
}