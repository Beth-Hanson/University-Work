/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Warm Up 6-4 
File: warmup.h
Date: 07/12/18
Description: .*/

#ifndef WARMUP_H
//Disables scanf_s error
#pragma warning(disable: 4996)
#define WARMUP_H

//libraries
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Structs
typedef struct {
	char name[50];
	char textbook[50];
	int class_size;
} course_t;

typedef struct {
	char shipName[50];
	char shipSymbol;
	int shipLength;
} ship_t;

//Prototypes
void courseInfo(course_t course);
course_t get_course(void);
int sameOrNot(course_t *course1, course_t *course2);

#endif