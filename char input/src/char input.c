/*
 ============================================================================
 Name        : char.c
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
	char a[10];
	printf("enter your name");
	scanf("%s",a);
	printf("Your name is : %s",a);


	return EXIT_SUCCESS;
}
