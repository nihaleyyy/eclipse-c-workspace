/*
 ============================================================================
 Name        : interchanging.c
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
	int size,a[100],b[100],i,temp;
	printf("Enter size of array:");
	scanf("%d",&size);
	printf("Enter values of array 1: \n");
	for(i=0;i<size;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter values of array 2: \n");
	for(i=0;i<size;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<size;i++){
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
	printf("Arrays after swapping:");
	printf("\nARRAY 1: ");
	for(i=0;i<size;i++){
		printf("%d ",a[i]);
	}
	printf("\nARRAY 2: ");
	for(i=0;i<size;i++){
		printf("%d ",b[i]);
	}
	return EXIT_SUCCESS;
}
