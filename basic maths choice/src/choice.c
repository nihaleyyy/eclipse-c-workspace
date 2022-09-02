/*
 ============================================================================
 Name        : choice.c
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
	int a,b,choice,result;;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	printf("1 for add \n2 for sub \n3 for multiplication \n4  for division \nenter your choice ");
	scanf("%d",&choice);
	if(choice==1){
		result= a+b;
		printf("result %d",result);
	}else if(choice==2){
		result= a-b;
		printf("result %d",result);
	}else if(choice==3){
		result= a*b;
		printf("result %d",result);
	}else if(choice==4){
		result= a/b;
		printf("result %d",result);
	}else{
		printf("FOOL");

	}
	return EXIT_SUCCESS;
}
