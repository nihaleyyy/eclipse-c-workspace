/*
 ============================================================================
 Name        : 2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	setbuf(stdout,NULL);
	int i,limit,flag=0;
	char word[100];
	printf("Enter a Word: ");
	scanf("%s",word);

	limit=strlen(word);
	for(i=0;i<limit;i++){
		if(word[i]!=word[limit-i-1]){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("WORD IS PALINDROME");
	}else{
		printf("WORD IS NOT PALINDROME");
	}
	return EXIT_SUCCESS;
}
