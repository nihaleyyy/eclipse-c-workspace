/*
 ============================================================================
 Name        : sorting.c
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
	int s,i,a[100],temp=0,j;
	printf("Enter the size of array: ");
	scanf("%d",&s);
	printf("Enter the values: ");
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<s-1;i++){
		for(j=i+1;j<s;j++){
			if(a[i]<a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("SORTED ARRAY: ");
	for(i=0;i<s;i++){
		printf("%d ",a[i]);
	}
	return EXIT_SUCCESS;
}
