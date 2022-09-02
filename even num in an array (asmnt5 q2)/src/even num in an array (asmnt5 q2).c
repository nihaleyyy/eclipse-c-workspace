/*
 ============================================================================
 Name        : even.c
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
	int s,i,a[100],array=0;
	printf("Enter size of array: ");
	scanf("%d",&s);
	printf("Enter the values: \n");
	for(i=0;i<s;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<s;i++){
		if(a[i]%2==0){
			array++;
		}
	}
	printf("no of even num in given array is %d",array);
	return EXIT_SUCCESS;
}
