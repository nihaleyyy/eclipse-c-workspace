/*
 ============================================================================
 Name        : 2d.c
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
	int size,a[100][100],i,j,b[100][100],c[100][100];
	printf("Enter size of array: ");
	scanf("%d",&size);
	printf("Enter values of array 1: ");
	for(i=0;i<size;i++){
		for(j=0;j<size;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter values of array 2: ");
		for(i=0;i<size;i++){
			for(j=0;j<size;j++){
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<size;i++){
					for(j=0;j<size;j++){
						c[i][j]=a[i][j]+b[i][j];
					}
		}
		printf("sum of 2 arrys is \n");
		for(i=0;i<size;i++){
					for(j=0;j<size;j++){
						printf("%d\t",c[i][j]);
					}
					printf("\n");
		}
	return EXIT_SUCCESS;
}
