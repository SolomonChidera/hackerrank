#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(void) {
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";


	/* Declare second integer, double, and String variables.*/
	int num;
	double doub;
	char string[100];

	/* Read and save an integer, double, and String to your variables.*/
	scanf("%d", &num);
	scanf("%lf", &doub);
	fgets(string, sizeof(string), stdin);
	/* Print the sum of both integer variables on a new line.*/
	printf("%d\n", i + num);

	/* Print the sum of the double variables on a new line.*/
	printf("%.1f\n", d + doub);

	/* Concatenate and print the String variables on a new line*/
	printf("%s%s\n", s, string);
	/* The 's' variable above should be printed first.*/

	return (0);
}
