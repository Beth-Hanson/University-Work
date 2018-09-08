/*
Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Programming Assignment 1
Date: 06/08/18
Description: Physics Calculator*/
#pragma warning(disable : 4996)
#include <stdio.h>
#include <math.h>
#define PI 3.14159
#define G 6.67E-11

int main() {
	double mass, acceleration, force;
	double radius, height, volumeCylinder;
	double g_force, mass1, mass2, distance_g;
	double distance, x1, x2, y1, y2;
	double y, x, z;
	int a;
	char plaintext_character, encoded_character;

	printf("EQUATION EVALUATOR \n");

	//newton's second law
	printf("Newton's Second Law\n" 
	"Enter mass and acceleration (floating point values): \n"
	"mass: ");
	scanf("%lf", &mass);
	printf("acceleration: ");
	scanf("%lf", &acceleration);
	force = mass * acceleration;
	printf("Newton's Second Law: force = mass * acceleration = %lf * %lf = %lf\n\n", mass, acceleration, force);
	
	//V of Cyl PIr^2h=V
	printf("Volume of a Cylinder\n"
	"Enter radius and height (floating point values): \n"
	"radius: ");
	scanf("%lf", &radius);
	printf("height: ");
	scanf("%lf", &height);
	volumeCylinder = PI * pow(radius, 2) * height;
	printf("Volume of a Cylinder= PI* radius^2* height= %lf * %lf ^2 * %lf = %lf \n\n", PI, radius, height, volumeCylinder);

	//Character Encoding
	printf("Enter Plain Text Character: ");
	scanf("%c", &plaintext_character);
	scanf("%c", &plaintext_character);
	encoded_character = (plaintext_character - 'a') + 'A';
	printf("%c \n", encoded_character);
	
	//Gravity
	printf("Gravitational Force of Two Bodies \n");
	printf("Enter mass 1 and 2 and distance between (floating point values): \n");
	printf("mass 1: ");
	scanf("%lf", &mass1);
	printf("mass 2: ");
	scanf("%lf", &mass2);
	printf("distance: ");
	scanf("%lf", &distance_g);
	g_force = G * (mass1 * mass2) / pow(distance_g, 2);
	printf("force = G * (mass 1 * mass 2) / distance ^2 =");
	printf("%e * (%lf * %lf)/ %lf ^2 = %e \n\n", G, mass1, mass2, distance_g, g_force);

	//Distance
	printf("Distance between Two Points \n");
	printf("Enter values for x 1 and 2, and values for y 1 and 2 \n");
	printf("x1: ");
	scanf("%lf", &x1);
	printf("x2: ");
	scanf("%lf", &x2);
	printf("y1: ");
	scanf("%lf", &y1);
	printf("y2: ");
	scanf("%lf", &y2);
	distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y1), 2));
	printf("distance = sqrt((x1-x2)^2 + (y1-y2)^2) = %lf \n\n", distance);
	
	//General Equation
	printf("General Equation \n");
	printf("x as a float: ");
	scanf("%lf", &x);
	printf("z as a float: ");
	scanf("%lf", &z);
	printf("a as an integer: ");
	scanf("%d", &a);
	y = (double)(7 / 5)*x + z - a / (a % 2) + PI;
	printf("y = (7 / 5)*x + z - a / (a % 2) + PI \n");
	printf("y = (7 / 5)* %lf + %lf - %d / (%d % 2) + PI = %e \n\n", x, z, a, y);

	return 0;
}