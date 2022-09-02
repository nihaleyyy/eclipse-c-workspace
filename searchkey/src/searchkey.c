/*
 ============================================================================
 Name        : searchkey.c
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
	int limit,i,values[100],searchKey,flag=0;
	printf("Enter limit");
	scanf("%d",&limit);
	printf("Enter value");
	for(i=0;i<limit;i++){
		scanf("%d",&values[i]);

	}

	printf("Please enter searchkey");
	scanf("%d",&searchKey);

	for(i=0;i<limit;i++){
		if(searchKey==values[i]){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("Value found at position %d",i+1);
	}else{
		printf("Value not found");
	}
	return EXIT_SUCCESS;
}
