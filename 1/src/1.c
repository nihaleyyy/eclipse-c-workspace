/*
 ============================================================================
 Name        : 1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void getarray(int);
void displayarray(int);
int main(void) {
	setbuf(stdout,NULL);
	int limit;
	printf("SIZE OF ARRAY: ");
	scanf("%d",&limit);
	getarray(limit);
	displayarray(limit);
	return EXIT_SUCCESS;
}
void getarray(int limit){
	int i,a[100];
	printf("ENTER VALUES OF ARRAY:\n");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}
}
void displayarray(int limit){
	int i,b[100];
	printf("YOUR ARRAY IS: ");
	for(i=0;i<limit;i++){
		printf("%d\t",b[i]);
	}
	printf("\n");
}
