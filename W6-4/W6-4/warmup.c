/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Warm Up 6-4
File: warmup.c
Date: 07/12/18
Description: .*/

#include "warmup.h"
//Index indicating number in array.
void courseInfo(course_t course) {
	printf("Course: %s\n"
		"Textbook: %s\n"
		"Class Size: %d\n", course.name, course.textbook, course.class_size);
}

course_t get_course() {
	course_t course;
	char name[50], text[50];

	printf("Enter Course Name:\n");
	scanf("%s", name);
	strcpy(course.name, name);
	printf("Enter Course Textbook:\n");
	scanf("%s", text);
	strcpy(course.textbook, text);
	printf("Enter Course Class Size:\n");
	scanf("%d", &course.class_size);
	return course;
}

int sameOrNot(course_t *course1, course_t *course2) {
	if (course1 != course2) {
		return 0;
	}
	else {
		return 1;
	}
}

void generate_starting_point(int length, int direction, int * srow, int *scol)
{
	if (direction == 0) // vertical
	{
		*srow = rand() % (10 - length + 1);
		*scol = rand() % 10;
	}
	else // horizontal
	{
		*scol = rand() % (10 - length + 1);
		*srow = rand() % 10;
	}

}