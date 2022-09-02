/*
 ============================================================================
 Name        : sum.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num1;
	float num2;
	float sum;
	printf("Enter 2 numbers");
	scanf("%d%f",&num1,&num2);
	sum=(float)num1+num2;
	printf("sum of 2 integers is : %f", sum);

	return EXIT_SUCCESS;
}
