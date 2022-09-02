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
	int n,sum=0,i;
	printf("enter a limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d \n",i);
			sum=sum+i;
		}
	}
	printf("sum of odd num from 0 to %d is %d",n,sum);

	return EXIT_SUCCESS;
}
