/*
 ============================================================================
 Name        : mark.c
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
	float mark;
	printf("Enter your mark");
	scanf("%f",&mark);
	if(mark>=50){
		printf("You have passed");
	}else{
		printf("You have failed");
	}
	return EXIT_SUCCESS;
}
