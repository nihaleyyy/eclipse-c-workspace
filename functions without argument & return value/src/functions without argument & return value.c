/*
 ============================================================================
 Name        : aa.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void sum();
int main(void) {
	setbuf(stdout,NULL);
	sum();
	sum();
	return EXIT_SUCCESS;
}


void sum(){
	int sum=0,num1,num2;
	printf("Enter 2 Numbers: ");
	scanf("%d%d",&num1,&num2);
	sum=num1+num2;
	printf("Result is %d \n",sum);
}
