#pragma warning(disable: 4996)
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void reverse(int);

int main() {
	
	return 0;
}

void reverse(int n) {
	char word[50];
	scanf("%s", &word);
	if (n == 1) {
		printf("%s", word);
	}
	else {
		reverse(n - 1);
		printf("%s", word);
	}

}