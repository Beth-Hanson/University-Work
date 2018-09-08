/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 10
File: lab10.h
Date: 07/12/18
Description: .*/

#ifndef LAB10_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define LAB10_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Structs
//Task 1
typedef struct lat_long_t {
	int degrees;
	int minutes;
	double seconds;
	char direction;
}Lat_Long;

typedef struct {
	char place[50];
	Lat_Long latitude;
	Lat_Long longitude;
}location_t;

//Task 2
typedef enum {
	car, suv, truck
}body_t;

typedef struct {
	char make[50];
	char model[50];
	body_t body_type;
}vehicle_t;

//Task 3
typedef enum {
	true, false
}boolean_t;

typedef struct {
	char name[50];
	boolean_t whole_wheat;
	float price;
}bread_t;

//Prototypes
//Task 1
void print_location(location_t place);

//Task 2
int is_same_vehicle(vehicle_t vehicle1, vehicle_t vehicle2);

//Task 3
void bread_basket_contents(bread_t basket[10], int *whole, double *price);
#endif