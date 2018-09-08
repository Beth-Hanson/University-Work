/* Programmer: Beth Hanson
Class: CptS 121, Summer 2018
Programming Assignment: Lab 4
Date: 06/19/18
Description: File, if-else, and switch functions */

#include "Lab04.h"

int main() {
	//Task 1 Calorie Calculator
	FILE*infile = NULL, *outfile = NULL;
	double weight, height, age, bmr, calories;
	int actLevel;
	char gender;
	infile = fopen("input.dat", "r");
	gender = readGender(infile);
	weight = readWeight(infile);
	height = readHeight(infile);
	age = readAge(infile);
	bmr = metabolicRate(gender, weight, height, age);
	printf("Input activity level as an int between 1 and 5 \n");
	scanf("%d", &actLevel);
	calories = calorieCount(bmr, actLevel);
	printf("Calories= %lf \n", calories);
	
	//Task 2 Player Bonus
	char answer;
	int bonus, total;
	printf("All-Star Game appearance? ");
	scanf(" %c", &answer);
	//Note: this suggested format doesn't function as needed because it cannot compute the total sum if all answers are y. This was problem previously asked about
	if (answer == 'y') {
		bonus = 25000;
	}
	printf("Regular season MVP? ");
	scanf(" %c", &answer);
	if (answer == 'y') {
		total = bonus + 75000;
	}
	printf("World Series MVP? ");
	scanf(" %c", &answer);
	if (answer == 'y') {
		total = bonus + 100000;
	}
	printf("Gold Glove Award? ");
	scanf(" %c", &answer);
	if (answer == 'y') {
		total = bonus + 50000;
	}
	printf("Silver Slugger award? ");
	scanf(" %c", &answer);
	if (answer == 'y') {
		total = bonus + 35000;
	}
	printf("Home Run Champ? ");
	scanf(" %c", &answer);
	if (answer == 'y') {
		total = bonus + 25000;
	}
	printf("Battling Average Champ? ");
	scanf(" %c", &answer);
	if (answer == 'y') {
		total = bonus + 25000;
	}
	printf("Player bonus is %d ", total);
	system("pause");

	return 0;
}