/*
 ============================================================================
 Name        : larger.c
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
	int a,b,c;
	printf("Enter 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b) & (a>c)){
		printf("larger number is %d",a);
	}else if((b>a) & (b>c)){
		printf("larger number is %d",b);
	}else{
		printf("larger number is %d",c);
	}
	return EXIT_SUCCESS;
}
