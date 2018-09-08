/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 4
Date: 06/19/18
Description: File, if-else, and switch functions */

#include "Lab04.h"
//Task 1 Calorie Calculator

double readWeight(FILE*infile) {
	double weight;
	fscanf(infile, "%lf", &weight);
	return weight;
}
double readHeight(FILE*infile) {
	double height;
	fscanf(infile, "%lf", &height);
	return height;
}
double readAge(FILE*infile) {
	double age;
	fscanf(infile, "%lf", &age);
	return age;
}
char readGender(FILE*infile) {
	char gender;
	fscanf(infile, "%c", &gender);
	return gender;
}
double metabolicRate(char gender, double weight, double height, double age) {
	double bmr;
	if (gender == 'F') {
		bmr = 655.0 + (4.35*weight) + (4.7*height) - (4.7*age);
	}
	else if (gender == 'M') {
		bmr = 66.0 + (6.23*weight) + (12.7*height) - (6.8*age);
	}
	return bmr;
}
double calorieCount(double bmr, int level) {
	double calories;
	if (level == 1) {
		calories = bmr * 1.2;
	}
	else if (level == 2) {
		calories = bmr * 1.375;
	}
	else if (level == 3) {
		calories = bmr * 1.55;
	}
	else if (level == 4) {
		calories = bmr * 1.725;
	}
	else if (level == 5) {
		calories = bmr * 1.9;
	}
	return calories;
}

//Task 2 Player Bonus
